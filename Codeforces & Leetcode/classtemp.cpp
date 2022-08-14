#include<iostream>
using namespace std;

class temperature
{
    public:
    float x;
    float y;
    
        float conversion(float y){
             y = ( x - 32)/1.8);
             return y;
        }
        void display(){
            cout<<y;
        }
};

int main(){
    float e;
    temperature t1;
    cout<<"Enter value in fahrenhiet ";
    cin>>e;
    //t1.setData(e);
    t1.conversion(e);
    t1.display();
    return 0;
}
