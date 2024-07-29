// Let's implement graph using 2d matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    int g[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int w;
            cout << "Enter the weight from " << i << " and " << j << ": ";
            cin >> w;
            g[i][j] = w;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " is connected to : ";
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] != 0)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] != 0)
            {
                cout << i << "---" << g[i][j] <<  "---" << j << endl;
            }
        }
    }

    return 0;
}