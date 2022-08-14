#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <complex>
#include <fstream>

using namespace std;

// Mandatory parameters
const int L = 1; //length of domain in x direction
const int tmax = 10; //end time
const int nx = 100, nt = 100; //number of the grid points and time steps respectively
double lambda; //dictates the shape of the potential (we can use lambda = 0.0 
               // to test the code against the known solution for the harmonic 
                              // oscillator)
                              complex<double> I(0.0, 1.0); //imaginary unit
// Derived parameters
double delta_x = 1. / (nx - 1);

//spacing between the grid points
double delta_t = 1. / (nt - 1);

//the time step
double r = delta_t / (delta_x * delta_x); //used to simplify expressions for 
                                          // the coefficients of the lhs and 
                                                                                    // rhs of the matrix eqn
// Algorithm for solving the tridiagonal matrix system
vector<complex<double> > thomas_algorithm(vector<double>& a,
                                          vector<complex<double> >& b,
                                                                                    vector<double>& c,
                                                                                                                              vector<complex<double> >& d)
                                                                                                                              {
// Temporary wave function
    vector<complex<double> > y(nx + 1, 0.0);
// Modified matrix coefficients
    vector<complex<double> > c_prime(nx + 1, 0.0);
        vector<complex<double> > d_prime(nx + 1, 0.0);
// This updates the coefficients in the first row
    c_prime[0] = c[0] / b[0];
        d_prime[0] = d[0] / b[0];
// Create the c_prime and d_prime coefficients in the forward sweep
    for (int i = 1; i < nx + 1; i++)
        {
                complex<double> m = 1.0 / (b[i] - a[i] * c_prime[i - 1]);
                        c_prime[i] = c[i] * m;
                                d_prime[i] = (d[i] - a[i] * d_prime[i - 1]) * m;
                                    }
// This gives the value of the last equation in the system
    y[nx] = d_prime[nx];
// This is the reverse sweep, used to update the solution vector
    for (int i = nx - 1; i > 0; i--)
        {
                y[i] = d_prime[i] - c_prime[i] * y[i + 1];
                    }
                        return y;
                        }
void calc()
{

// First create the vectors to store the coefficients
    vector<double> a(nx + 1, 1.0);
        vector<complex<double> > b(nx + 1, 0.0);
            vector<double> c(nx + 1, 1.0);
                vector<complex<double> > d(nx + 1, 0.0);
                    vector<complex<double> > psi(nx + 1, 0.0);
                        vector<complex<double> > phi(nx + 1, 0.0);
                            vector<double> V(nx + 1, 0.0);
                                vector<double> x(nx + 1, 0);
                                    vector<vector<complex<double> > > PSI(nt + 1,
                                                                              vector<complex<double> >(nx + 1,
                                                                                                                                                 0.0));
                                                                                                                                                     vector<double> prob(nx + 1, 0);
// We don't have the first member of the left diagonal and the last member 
// of the right diagonal
    a[0] = 0.0;
        c[nx] = 0.0;
    for (int i = 0; i < nx + 1; i++)
        {
                x[i] = (-nx / 2) + i; // Values on the x axis
                        // Eigenfunction of  the harmonic oscillator in the ground state
                                phi[i] = exp(-pow(x[i] * delta_x, 2) / 2) / (pow(M_PI, 0.25)); 
                                        // Anharmonic potential
                                                V[i] = pow(x[i] * delta_x, 2) / 2 + lambda * pow(x[i] * delta_x, 4);
                                                        // The main diagonal coefficients
                                                                b[i] = 2.0 * I / r - 2.0 + V[i] * delta_x * delta_x; 
                                                                    }
    double sum0 = 0.0;
        for (int i = 0; i < nx + 1; i++)
            {
                    PSI[0][i] = phi[i]; // Initial condition for the wave function
                            sum0 += abs(pow(PSI[0][i], 2)); // Needed for the normalization
                                }
                                    sum0 = sum0 * delta_x;
    for (int i = 0; i < nx + 1; i++)
        {
                PSI[0][i] = PSI[0][i] / sqrt(sum0); // Normalization of the initial 
                                                            // wave function
                                                                }
    for (int j = 0; j < nt; j++)
        {
                PSI[j][0] = 0.0;
                        PSI[j][nx] = 0.0; // Boundary conditions for the wave function
                                d[0] = 0.0;
                                        d[nx] = 0.0; // Boundary conditions for the rhs
// Fill in the current time step vector d representing the rhs
        for (int i = 1; i < nx + 1; i++)
                {
                            d[i] = PSI[j][i + 1]
                                                + (2.0 - 2.0 * I / r - V[i] * delta_x * delta_x) * PSI[j][i]
                                                +                     + PSI[j][i - 1];
        }
// Now solve the tridiagonal system
        psi = thomas_algorithm(a, b, c, d);
        for (int i = 1; i < nx; i++)
                {
                            PSI[j + 1][i] = psi[i]; // Assign values to the wave function
                                    }
                                            for (int i = 0; i < nx + 1; i++)
                                                    {
                                                                // Probability density of the wave function in the next time step
                                                                            prob[i] = abs(PSI[j + 1][i] * conj(PSI[j + 1][i])); 
                                                                                    }
                                                                                            double sum = 0.0;
                                                                                                    for (int i = 0; i < nx + 1; i++)
                                                                                                            {
                                                                                                                        sum += prob[i] * delta_x;
                                                                                                                                }
                                                                                                                                        for (int i = 0; i < nx + 1; i++)
                                                                                                                                                {
                                                                                                                                                            // Normalization of the wave function in the next time step
                                                                                                                                                                        PSI[j + 1][i] /= sqrt(sum); 
                                                                                                                                                                                }
                                                                                                                                                                                    }
// Opening files for writing the results
    ofstream file_psi_re, file_psi_imag, file_psi_abs, file_potential,
                file_phi0;
                    file_psi_re.open("psi_re.dat");
                        file_psi_imag.open("psi_imag.dat");
                            file_psi_abs.open("psi_abs.dat");
    for (int i = 0; i < nx + 1; i++)
        {
                file_psi_re << fixed << x[i] << "  ";
                        file_psi_imag << fixed << x[i] << "  ";
                                file_psi_abs << fixed << x[i] << "  ";
                                        for (int j = 0; j < nt + 1; j++)
                                                {
                                                            file_psi_re << fixed << setprecision(6) << PSI[j][i].real() << "  ";
                                                                        file_psi_imag << fixed << setprecision(6) << PSI[j][i].imag()
                                                                                            << "  ";
                                                                                                        file_psi_abs << fixed << setprecision(6) << abs(PSI[j][i]) << "  ";
                                                                                                                }
                                                                                                                        file_psi_re << endl;
                                                                                                                                file_psi_imag << endl;
                                                                                                                                        file_psi_abs << endl;
                                                                                                                                            }
}

int main(int argc, char **argv)
{
    calc();
        return 0;