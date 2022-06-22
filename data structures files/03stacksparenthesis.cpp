// checking if the equation is balanced or not
#include <iostream>
using namespace std;

class stacks
{
private:
    char arr[100];
    int top = -1;
    int size = 100;

public:
    int isEmpty();
    int isFull();
    int pop();
    int push(int element);
    int parenthesis(char arr[], int s);
};

int stacks::isEmpty()
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
int stacks::isFull()
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
int stacks::push(int element)
{
    if (isFull() == 1)
    {
        cout << "Stack overflow" << endl;
        return 1;
    }
    else
    {
        ++top;
        arr[top] = element;
    }
    return 0;
}
int stacks::pop()
{
    int val;
    if (isEmpty() == 1)
    {
        cout << "stack underflow \nPush elements in stack" << endl;
        return 1;
    }
    else
    {
        val = arr[top];
        --top;
    }
    return val;
}
int stacks::parenthesis(char arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == '(')
        {
            push(arr[i]);
        }
        if (arr[i] == ')')
        {
            if (isEmpty() == 1)
            {
                cout << " unbalanced" << endl;
                return 0;
            }
            pop();
        }
    }
    if (isEmpty() == 1)
    {
        cout << "balanced" << endl;
        return 1;
    }
    else
    {
        cout << "unbalanced" << endl;
        return 0;
    }
}
int main()
{
    char arr[] = "(9*7)";
    int s = sizeof(arr) / sizeof(char);
    stacks str1;
    if (str1.parenthesis(arr, s))
    {
        cout << "parenthesis is matching" << endl;
    }
    else
    {
        cout << "parenthesis is not matching" << endl;
    }
}
