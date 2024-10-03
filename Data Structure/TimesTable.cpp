#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, limit;

    cout << "Enter a number for times table: ";
    cin >> n;

    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    cout << "Multiplication table for " << n << endl;
    for (int i = 1; i <= limit; i++)
    {
        cout << n << " X " << i << " = " << n * i << endl;
    }

    return 0;
}