#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
void insert_heap(int heap[], int &size, int value)
{
    int i = size;
    heap[size++] = value;
    while (i != 0 && heap[(i - 1) / 2] < heap[i])
    {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}
void delete_heap(int heap[], int &size)
{
    if (size == 0)
        return;
    heap[0] = heap[--size];
    int i = 0;
    while (2 * i + 1 < size)
    {
        int j = 2 * i + 1;
        if (j + 1 < size && heap[j] < heap[j + 1])
            j++;
        if (heap[i] >= heap[j])
            break;
        swap(heap[i], heap[j]);
        i = j;
    }
}
void print_heap(int heap[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main()
{
    int heap[MAX_SIZE];
    int size = 0;

    int example[] = {40, 30, 15, 10, 20};
    size = sizeof(example) / sizeof(example[0]);
    for (int i = 0; i < size; ++i)
        heap[i] = example[i];

    cout << "Initial Max Heap: ";
    print_heap(heap, size);

    int number_to_insert = 50;
    insert_heap(heap, size, number_to_insert);
    cout << "After inserting " << number_to_insert << ": ";
    print_heap(heap, size);

    delete_heap(heap, size);
    cout << "After deleting max element: ";
    print_heap(heap, size);

    return 0;
}