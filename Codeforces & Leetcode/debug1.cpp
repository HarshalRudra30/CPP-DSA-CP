#include<iostream>
using namespace std;

class Item
{
    private:
        static int count;
    public:
    Item(){
        count ++;
    }
    int getcount()
    {
        return count;
    }
    int *getcountaddress()
    {
        return &count;
    }

};
int Item ::count = 0;

int main(){
    Item o1;
    Item o2;

    cout<<o1.getcount()<<" ";
    cout<<o2.getcount()<<" ";

    cout<<o1.getcountaddress()<<" ";
    cout<<o2.getcountaddress()<<" ";
    return 0;
    
}
