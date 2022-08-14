#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter size of matrix: ";
    cin>>n>>m;
    cout<<"Enter matrix elements: "<<endl;
    int arr[n][m]; //= {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }*/
    cout<<"Transpose of matrix is: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
    
    
}