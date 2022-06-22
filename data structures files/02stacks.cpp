// push , pop, isempty(), isfull() , peek()

#include <iostream>
using namespace std;

class stacks
{
private:
    int arr[20]; // created a stack that can hold 20 elements
    int size = 20;
    int top = -1;
    int end = 0;

public:
    int isEmpty();
    int isFull();
    int pop();
    int push(int element);
    void display();
    int peek(int i);
    int stackTop();
    int stackBottom();
};
int stacks ::isEmpty()
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
int stacks ::isFull()
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
    int d;
    d = isFull();
    if (d == 1)
    {
        cout << "stack overflow" << endl;
        return 1;
    }
    else
    {
        top++;
        arr[top] = element;
        end = end + 1;
        return 0;
    }
}
int stacks::pop()
{
    int d, val;
    d = isEmpty();
    if (d == 1)
    {
        cout << "stack underflow" << endl;
        return 1;
    }
    else
    {
        val = arr[top];
        top = top - 1;
        end = end - 1;
        return val;
    }
}
void stacks ::display()
{
    cout << "Elements in stack: " << endl;
    for (int i = 0; i < end; i++)
    {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }
}
int stacks ::peek(int i)
{
    int position = top - i + 1;
    if (position < 0)
    {
        cout << "Invalid  Input" << endl;
        return 1;
    }
    else
    {
        return arr[position];
    }
}
int stacks::stackTop()
{
    int val = isEmpty();
    if (val == 1)
    {
        cout << "no element in stack" << endl;
        return 1;
    }
    else
    {
        return arr[top];
    }
}
int stacks::stackBottom()
{
    int val = isEmpty();
    if (val == 1)
    {
        cout << "no element in stack" << endl;
        return 1;
    }
    else
    {
        return arr[0];
    }
}

int main()
{
    stacks str1;
    int val, variable1, variable2;
    cout << "1. push in stack" << endl
         << "2. pop from stack" << endl
         << "3. display stack" << endl
         << "4. peep into stack" << endl
         << "5. exit" << endl
         << "6. Stack topmost element" << endl
         << "7. Stack bottomost element" << endl;
    do
    {
        cout << "Enter value" << endl;
        cin >> val;
        switch (val)
        {
        case 1:
            cout << "Enter element: " << endl;
            cin >> variable1;
            str1.push(variable1);
            break;
        case 2:
            cout << "element " << str1.pop() << " from stack poped out" << endl;
            break;
        case 3:
            variable1 = str1.isEmpty();
            if (variable1 == 1)
            {
                cout << "stack empty" << endl;
            }
            else
            {
                str1.display();
            }
            break;
        case 4:
            cout << "Enter the position" << endl;
            cin >> variable2;
            variable1 = str1.isEmpty();
            if (variable1 == 1)
            {
                cout << "stack empty" << endl;
            }
            else
            {
                cout << "element at " << variable2 << " is " << str1.peek(variable2) << endl;
            }
            break;
        case 5:
            cout << "Exit";
            break;
        case 6:
            cout << "Topmost element in stack: " << str1.stackTop() << endl;

            break;
        case 7:
            cout << "Bottomost element in stack: " << str1.stackBottom() << endl;
            break;

        default:
            break;
        }
    } while (val != 5);

    return 0;
}
