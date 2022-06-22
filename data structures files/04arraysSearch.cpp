#include <iostream>
using namespace std;
void linearSearch(int arr[], int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found at " << i << " index";
        }
    }
    if (i >= size)
    {
        cout <<"Element not found" << endl;
    }
}
int binarySearch(int arr[],int size,int element)
{
    int low,mid,high;
    low = 0;
    high= size-1;
    while (low<=high)
    {   
        mid = (low+ high)/2;
        if (arr[mid]==element)
        {
           return mid;
        }
        else if (element>arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }   
        
    }
    return -1;

}

int main()
{
    // int arr[] = {10, 78, 67, 54, 9845, 976, 6789};
    // int size, element;
    // size = sizeof(arr) / sizeof(int);
    // cout << "Enter the element to be searched " << endl;
    // cin >> element;
    // linearSearch(arr,size,element);
    int arr[]={10,20,30,40,50};
    int size, element;
    size = sizeof(arr) / sizeof(int);
    cout << "Enter the element to be searched " << endl;
    cin >> element;
    cout<<binarySearch(arr,size,element);

    return 0;
}