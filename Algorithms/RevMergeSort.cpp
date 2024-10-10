#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1, len2 = e - mid;

    int new1[len1], new2[len2];

    int index = s;
    for (int i = 0; i < len1; i++)
        new1[i] = arr[index++];
    
    index = mid + 1;
    for(int i = 0; i < len2; i++)
        new2[i] = arr[index++];

    index = s;
    int i = 0, j = 0;

    while(i < len1 and j < len2)
    {
        if(new1[i] > new2[j])
            arr[index++] = new1[i++];
        else
            arr[index++] = new2[j++];
    }

    while(i < len1)
        arr[index++] = new1[i++];

    while(j < len2)
        arr[index++] = new2[j++];
}
void MergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    Merge(arr, s, e);
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

    MergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;

    return 0;
}