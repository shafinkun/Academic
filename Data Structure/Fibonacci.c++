#include <bits/stdc++.h>
using namespace std;

int main()
{
    int terms;

    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> terms;

    if (terms <= 0)
        cout << "Not valid!" << endl;
    else
    {
        int first = 0, second = 1;

        cout << "Fibonacci sequence up to " << terms << " terms." << endl;
        for (int i = 1; i <= terms; i++)
        {
            cout << first << " ";
            int next = first + second;
            first = second;
            second = next;
        }
        cout << endl;
    }

    return 0;
}