#include<bits/stdc++.h>
using namespace std;

void insort(int a[], int sz)
{
    for(int i = 1; i < sz; i++)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            if(a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for(int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insort(arr, n);

    return 0;
}