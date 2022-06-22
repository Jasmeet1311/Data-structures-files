// Search, insert and delete in an unsorted array

#include <iostream>
using namespace std;
void arraySearch(int arr[], int element, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found at " << i << " index" << endl;
        }
    }
    if (i > size)
    {
        cout << "element not found" << endl;
    }
}
void arrayInsert(int arr[], int index, int element, int size, int capacity)
{
    if (size >= capacity)
    {
        cout << "Element cannot be inserted";
    }
    else
    {
        int i;
        for (i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}
void arrayDelete(int size, int arr[], int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void arrayDisplay(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()

{
    int arr[20];
    int size, num, element, index, capacity;
    capacity = 20;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "enter elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter numbers to perform "
         << "1. for search" << endl
         << "2. for insertion" << endl
         << "3. for deletion" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Enter the element to be searched" << endl;
        cin >> element;
        arraySearch(arr, element, size);
        break;
    case 2:
        cout << "Enter the element to be inserted" << endl;
        cin >> element;
        cout << "Enter index :";
        cin >> index;
        arrayInsert(arr, index, element, size, capacity);
        size = size + 1;
        arrayDisplay(arr, size);
        break;
    case 3:
        cout << "Enter the index of the element to be deleted" << endl;
        cin >> index;
        arrayDelete(size, arr, index);
        size = size - 1;
        arrayDisplay(arr, size);
        break;
    default:
        cout << "Enter a valid number";
        break;
    }

    return 0;
}