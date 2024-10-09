#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s], cnt = 0;

    for (int i = s + 1; i <= e; ++i)
        if (arr[i] > pivot)
            cnt++;

    int pivot_Ind = s + cnt;
    swap(arr[s], arr[pivot_Ind]);

    int i = s, j = e;
    while (i < pivot_Ind and j > pivot_Ind)
    {
        while (arr[i] > pivot)
            i++;
        while (arr[j] < pivot)
            --j;

        if (i < pivot_Ind and j > pivot_Ind)
            swap(arr[i++], arr[j++]);
    }

    return pivot_Ind;
}

void QS(int arr[], int s, int e)
{
    if (s > e)
        return;

    int pos = partition(arr, s, e);

    QS(arr, s, pos - 1);
    QS(arr, pos + 1, e);
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    QS(arr, 0, n - 1);

    cout << "Descending order: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;

    return 0;
}