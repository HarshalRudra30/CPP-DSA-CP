#include<iostream>
using namespace std;

class alpha
{
    int x;
    public:
    alpha(int i){
        x = i;
        cout<<"Aplha initialized!"<<endl;
    }
    void show_x(void){
        cout<<"X = "<<x<<endl;
    }
};

class beta 
{
    int y;
    public:
    beta(int j){
        y = j;
        cout<<"Beta initialized!"<<endl;
    }
    void show_y(void){
        cout<<"Y = "<<y<<endl;
    }
};

class gamma : public alpha,public beta
{
    int m,n;
    public:
    gamma(int a, float b, int c, int d):
            alpha(a), beta(b)
        {
            m = c;
            n = d;
            cout<<"Gamma initialized!"<<endl;
        }
    void show_mn(void){
        cout<<"M = "<<m<<endl;
        cout<<"N = "<<n<<endl;
    }    
};

int main(){
    gamma g(5,6.6,14,78);
    cout<<endl;
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}