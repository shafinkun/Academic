// Implementing a Stack with Push and Pop Operations
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top >= MAX_SIZE - 1)
    {
        cout << "Stack overflow!" << endl;
        return;
    }
    stack[++top] = value;
    cout << value << " pushed to stack." << endl;
}

void pop()
{
    if (top < 0)
    {
        cout << "Stack underflow!" << endl;
        return;
    }
    cout << stack[top--] << " popped from stack." << endl;
}

int peek()
{
    if (top < 0)
    {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top];
}

bool isEmpty()
{
    return top < 0;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout << "Top element: " << peek() << endl;

    pop();
    pop();

    cout << "Top element after popping: " << peek() << endl;

    return 0;
}
