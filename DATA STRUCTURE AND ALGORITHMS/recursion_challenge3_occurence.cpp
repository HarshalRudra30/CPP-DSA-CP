//Find first and last occurence of a number in array:
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = lastOcc(arr, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key you want to search: ";
    cin >> key;

    cout << "The key first occured at index: " << firstOcc(arr, n, 0, key) << endl;
    cout << "The key last occured at index: ";
    cout << lastOcc(arr, n, 0, key);
    return 0;
}