#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
        if (arr[i] < pivot)
            cnt++;

    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    while (i < pivotIndex and j > pivotIndex)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivotIndex and j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            ++i;
            --j;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int pos = partition(arr, s, e);

    quickSort(arr, s, pos - 1);
    quickSort(arr, pos + 1, e);
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;

    return 0;
}