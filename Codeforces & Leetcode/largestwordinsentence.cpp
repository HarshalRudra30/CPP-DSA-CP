#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin>>arr;
    cin.getline(arr,n);
    cin.ignore();
    int i = 0;
    int current_length = 0;
    int max_length = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (current_length>max_length)
            {
                max_length = current_length;
            }
            current_length = 0;
            
        }
        else{
            current_length++;
        }
        if (arr[i] == '\0' )
        {
            break;
        }
        i++;
        
    }
    cout<<max_length<<endl;
    return 0;
}