/* Inserting an Item at a given position in an array */
#include <iostream>
using namespace std;

void insertInArray(int arr[], int size, int pos, int item)
{
    // Check if position is valid
    if (pos < 0 || pos > size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the right
    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Insert item at the given position
    arr[pos] = item;

    // Increase the size of the array
    size++;

    // Print the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos, item;

    cout << "Enter the position to insert: ";
    cin >> pos;

    cout << "Enter the item to insert: ";
    cin >> item;

    insertInArray(arr, size, pos, item);

    return 0;
}