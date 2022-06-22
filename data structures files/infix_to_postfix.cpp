// true--> return 1
// false--> return 0
// stack overflow --> -1
// stack underflow -->-1
#include <iostream>
using namespace std;
class stacks
{
private:
    char arr[100];
    int size = 100;
    int top = -1;

public:
    int isEmpty();
    int isFull();
    int stackTop();
    int push(char element);
    char pop();
    int precedence(char ch);
    int isoperator(char ch);
    int infix_to_postfix(char infix[], int s);
};
int stacks::stackTop()
{
    return arr[top];
}
int stacks::isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
int stacks::isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    return 0;
}
int stacks::push(char element)
{
    if (isFull() == 1)
    {
        cout << "Stack overflow" << endl;
        return -1;
    }
    else
    {
        top++;
        arr[top] = element;
    }
    return 0;
}
char stacks::pop()
{
    char value;
    if (isEmpty() == 1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
    {
        value = arr[top];
        top--;
    }
    return value;
}
int stacks::isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
    {
        return 1;
    }
    return 0;
}
int stacks::precedence(char ch)
{
    if (ch == '*' || ch == '/' || ch == '%')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    return 1;
}
int stacks::infix_to_postfix(char infix[], int s)
{
    char postfix[s];
    int i = 0; // infix traversal
    int j = 0; // postfix traversal
    for (int i = 0; i < s; i++)
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop()))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                pop();
                j++;
            }
        }
    }
    while (!isEmpty())
    {
        postfix[j] = pop();
        j++;
    }
    for (int c = 0; c < s; c++)
    {
        cout<<postfix[c];
    }
    
    
    return 0;
}

int main()
{
    stacks str1;
    int s;
    char infix[] = "x-y/z-k*a";
    s = sizeof(infix) / sizeof(char);
    cout<<"postfix form :"<<str1.infix_to_postfix(infix,s);


    return 0;
}