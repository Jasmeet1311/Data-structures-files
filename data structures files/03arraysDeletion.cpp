#include <iostream>
using namespace std;
void deletion(int arr[], int index, int size)
{

    //deletion function
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[100], size, index;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the index of the element to be deleted : ";
    cin >> index;
    cout << "Elements before deletion:" << endl;
    display(arr, size);
    deletion(arr, index, size);
    size = size - 1;
    cout << "\nElements after deletion:" << endl;
    display(arr, size);

    return 0;
}