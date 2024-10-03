#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Printing array elements: " << endl;

    for (int &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Printing vector elements: " << endl;
    for(int &x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}