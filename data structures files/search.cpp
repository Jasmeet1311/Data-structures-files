//linear search

#include <iostream>
using namespace std;
void linearsearch(int arr[], int key, int n);
void binarysearch(int arr[], int key, int n);

void linearsearch(int arr[], int key, int n)
{

    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "element found at " << i << " index" << endl;
            break;
        }
    }
    if (i>=n)
    {
        cout<<"Element not found"<<endl;
    }
    
}
// binary search
void binarysearch(int arr[], int key, int n)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == arr[mid])
        {
            cout << "element found at " << mid << " index" << endl; 
            break;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (s > e)
    {
        cout << "element not found " << endl;
    }
}
int main()
{
    int n, key;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    cout << "by linear search" << endl;
    linearsearch(arr, key, n);
    cout << "by binary search" << endl;
    binarysearch(arr, key, n);
    return 0;
}