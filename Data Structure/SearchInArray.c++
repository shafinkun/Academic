/* Searching for a Key Item in an Array */
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; // key not found
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int index = linearSearch(arr, size, key);
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}