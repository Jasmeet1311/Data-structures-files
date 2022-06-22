// program to enter size of an array and the elements in respective indices and find the max and min number out of that.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxNo, minNo;
    maxNo= INT_MIN;
    minNo= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(arr[i],maxNo);
    }
    for (int i = 0; i < n; i++)
    {
        minNo = min(arr[i],minNo);
    }
    cout<<"Maximum number is "<<maxNo<<endl; 
    cout<<"Minimum number is "<<minNo<<endl; 
// cout<<"max num is"<<INT_MAX;
// cout<<"min num is"<<INT_MIN;
    
    return 0;
}