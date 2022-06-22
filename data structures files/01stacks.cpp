#include <iostream>
using namespace std;
class stacks
{
public:
    int size=20;
    int top = -1;
    int arr[20];

public:
    int isEmpty()
    {
        if (top == -1)
        {
           return 1;
        }
        else
        {
            return 0;
        }
    }
    int isFull()
    {
        if (top == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    stacks s1;
    s1.size =10;
    s1.arr[0] = 45;
    s1.top++;
    cout<<s1.isEmpty();
    cout<<s1.isFull();
    return 0;
}
