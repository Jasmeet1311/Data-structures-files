// selection sort code
// to sort in ascending order
#include<iostream>
using namespace std;
void selectionSort(int arr[],int size)
{   
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
                if (arr[j]<arr[i])        //arr[j]>arr[i] --> for decending order
                {
                   temp = arr[i] ;
                   arr[i] = arr[j];
                   arr[j] = temp;
                }    
        } 
    }
    cout<<"Sorted array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}

int main()
{    
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    
    
    return 0;
}