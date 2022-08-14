#include<iostream>
using namespace std;

class alpha
{
    int x;
    public:
    alpha(int i){
        x = i;
        cout<<"Alpha constructed!"<<endl;
    }
    void show_alpha(void){
        cout<<"X = "<<x<<endl;
    }
};

class beta
{
    float p,q;
    public:
    beta(float a, float b) : p(a), q(b+p)
    {
        cout<<"Beta constructed!"<<endl;
    }
    void show_beta(void){
        cout<<"P = "<<p<<endl;
        cout<<"Q = "<<q<<endl;
    }
};

class gamma : public alpha, public beta
{
    int u,v;
    public:
    gamma(int a, int b, float c):
    alpha(a*2), beta(c,c), u(a)
    {
        v = b;
        cout<<"Gamma initialized!"<<endl;
    }
    void show_gamma(){
        cout<<"U = "<<u<<endl;
        cout<<"V = "<<v<<endl;
    }
};

int main(){
    gamma g(2, 5,6.0);
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
}