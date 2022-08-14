#include<iostream>
using namespace std;

class M
{
    protected:
    int m;
    public:
    void get_m(int);
};

class N
{
    protected:
    int n;
    public:
    void get_n(int);
};

class O : public M, public N
{
    int o;
    public:
    void display(void);
};

void M ::get_m(int a){
    m = a;
}
void N ::get_n(int b){
    n = b;
}

void O ::display(){
    cout<<"A = "<<m<<endl;
    cout<<"B = "<<n<<endl;
    cout<<"Product of A and B is : "<<m*n<<endl;
}

int main(){
    O o1;
    int x,y;
    cout<<"Enter any two numbers: ";
    cin>>x>>y;
    o1.get_m(x);
    o1.get_n(y);
    o1.display();
    return 0;
}