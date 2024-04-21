/*
    Deleting an Item from a Defined Place in an Array
 */
#include <iostream>
using namespace std;

void deleteElement(int arr[], int size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index!" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 2;

    cout << "Before deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    deleteElement(arr, size, index);

    cout << "After deletion: ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}