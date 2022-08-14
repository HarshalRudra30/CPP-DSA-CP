#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "If output is 1 array is sorted. If output is 0 array is not sorted."<<endl;
    cout << sorted(arr, n) << endl;
    return 0;
}