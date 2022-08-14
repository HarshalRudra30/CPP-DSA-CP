#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
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
    int x;
    cout << "Enter element you want to search: " << endl;
    cin >> x;
    bool y = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                //cout<<"Element found "<<endl;
                cout << " Coordinates are: " << i << " " << j << endl;
                y = true;
            }
            /*else
            {
                cout<<"Element not found!";
            }
            */
        }
    }
    if (y)
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found!";
    }

    return 0;
}