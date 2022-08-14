#include<iostream>
using namespace std;

class Y;
class X
{
    int val1;
    friend void swap(X &,Y &);
    public:
    void setData(int a){
         val1 = a;
    }

    void display(void){
        cout<<val1<<endl;
    }
};
class Y
{
    int val2;
    friend void swap(X &,Y &);
    public:
    void setData(int b){
        val2 = b;
    }

    void display(void){
        cout<<val2<<endl;
    }
};

void swap(X &x, Y &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    X g;
    Y h;
    g.setData(56);
    h.setData(89);
    swap(g,h);

    cout<<"Value after swapping becomes: "<<endl;
    g.display();
    h.display();
    return 0;
}