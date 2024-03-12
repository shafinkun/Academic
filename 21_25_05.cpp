//Implementation of Ackermann function
/*____________________solved by Shahriar Hasnat Shafin Ahmed____________________*/
#include <bits/stdc++.h>
using namespace std;

//Ackermann function
int ackermann(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return ackermann(m - 1, 1);
    }
    else
    {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main()
{
    int m, n;
    cout << "Enter values for m and n (non-negative integers): ";
    cin >> m >> n;

    // Check for negative inputs (not allowed for Ackermann function)
    if (m < 0 or n < 0)
    {
        cout << "Error: Invalid input! m and n must be non-negative integers." << endl;
        return 1;
    }

    int result = ackermann(m, n);
    cout << "Ackermann(" << m << ", " << n << ") = " << result << endl;

    return 0;
}