#include <iostream>
using namespace std;
void insertion(int arr[], int capacity, int size, int element, int index)
{   
    // insertion operation
    if (size >= capacity)
    {
        cout << "Sorry element cannot be inserted" << endl;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{

    int arr[50], size, element, index;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout<<"Enter elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be inserted" << endl;
    cin >> element;
    cout << "Enter index :";
    cin >> index;

    cout<<"Elements before insertion"<<endl;
    display(arr,size);
    insertion(arr,50,size,element,index);
    size =size+1;
    cout<<"\nElements after insertion"<<endl;
    display(arr,size);
    return 0;
}