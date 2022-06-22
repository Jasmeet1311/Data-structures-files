//write and read the elements in 1D array


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the values in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Array with index                Its value"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]\t\t\t\t\t"<<a[i]<<endl;
    }
    return 0;
}

