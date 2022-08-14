#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter no. of row and column of 2D-array:"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"Enter element you want to search: ";
    cin>>x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = true;
            }
            
        }
        
    }
     
    if (flag){
        cout<<"Element  found!"<<endl;
    }
    else
    {
        cout<<"Element not found!"<<endl;
    }
    return 0;
    
}