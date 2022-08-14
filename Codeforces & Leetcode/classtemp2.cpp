#include<iostream>
using namespace std;

class temp
{
    float f,c;
    public:
    float getData();
    void Display();
};

float temp ::getData()
{
    cout<<"Enter value in fahrenheit: ";
    cin>>f;
    c = (f-32)/1.8;
    return c;
}

void temp ::Display(void)
{
    float v;
    v = getData();
    cout<<v;
}

int main(){
    temp t1;
    t1.getData();
    t1.Display();
    return 0;
}