// program to add two 2X2 matrix and display the result

#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n][n],b[n][n],sum[n][n],i,j;
    cout<<"Enter the elements in matrix A"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>a[i][j];  
        }    
    }
    cout<<"Enter the elements in matrix B"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>b[i][j];   
        }    
    }
    cout<<"Sum of the matrix A and matrix B "<<endl;
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {    
            sum[i][j] =a[i][j]+b[i][j];
            cout<<sum[i][j]<<"\t";
        } 
        cout<<endl;
    }

return 0;

}
