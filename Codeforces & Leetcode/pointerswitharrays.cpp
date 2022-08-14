#include<iostream>
using namespace std;

int main(){
    int arr[10] = {101,121,444,56,65,68,781,684,465,654};
    int num, *ptr;
    ptr = arr;
    cout<<"Enter value you want to search: "<<endl;
    cin>>num;
    for (int i = 0; i < 10; i++)
    {
        if (*ptr == num)
        {
            cout<<num<<" value is present!"<<endl;
            break;
        }
        else if (i == 9)
        {
            cout<<num<<" value is absent!"<<endl;
            ptr++;
        }       
    }
    return 0;
}