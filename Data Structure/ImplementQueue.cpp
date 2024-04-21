// Implementing a Queue with Insertion and Deletion Operations
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX_SIZE - 1)
    {
        cout << "Queue is full!" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = value;
    cout << value << " enqueued to queue." << endl;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << queue[front++] << " dequeued from queue." << endl;
}

int peek()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return queue[front];
}

bool isEmpty()
{
    return front == -1 || front > rear;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    cout << "Front element: " << peek() << endl;

    dequeue();
    dequeue();

    cout << "Front element after dequeue: " << peek() << endl;

    return 0;
}
