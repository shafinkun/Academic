// Implementing Selection Sort Algorithm
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
