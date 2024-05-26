#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int sz)
{
    int mini;
    for (int i = 0; i < sz - 1; ++i)
    {
        mini = i;
        for (int j = i + 1; j < sz; ++j)
        {
            if (a[j] < a[mini])
                mini = j;
        }
        if (mini != i)
            swap(a[mini], a[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}