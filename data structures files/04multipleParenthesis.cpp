// checking if the multi parenthesis equation is balanced or not
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
    int match(char a, char b);
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
int stacks::match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}
int stacks::parenthesis(char arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
        {
            push(arr[i]);
        }
        if (arr[i] == ')' || arr[i] == '}' || arr[i] == ']')
        {
            char poped_ch;
            if (isEmpty() == 1)
            {
                cout << " unbalanced" << endl;
                return 0;
            }
            poped_ch = pop();

            if (match(poped_ch, arr[i]) == 0)
            {
                cout << "Unbalanced parenthesis";
                return 0;
            }
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
    char arr[] = "{[9+(69*7)8*(90)]}";
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
