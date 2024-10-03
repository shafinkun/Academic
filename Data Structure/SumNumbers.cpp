#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number, sum = 0;

    cout << "Enter positive numbers and negative to terminate: ";

    while (cin >> number)
    {
        if (number >= 0)
        {
            sum += number;
        }
        else
        {
            break;
        }
    }

    cout << "Sum of positive numbers: " << sum << endl;

    return 0;
}