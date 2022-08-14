#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter matrix order: "<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter matrix elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout << "Matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}