#include <bits/stdc++.h>
using namespace std;
#define INF 1000

void display(int a[3][3])
{
    cout << "Minimum distance from any node: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == INF)
            {
                cout << "INFINITY \t";
                continue;
            }
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void floyd(int a[3][3])
{
    int i, j, k;

    for (k = 0; k < 3; k++)
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
            {
                if (a[i][j] > a[i][k] + a[k][j] and a[i][k] != INFINITY and a[k][j] != INFINITY)
                {
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
    display(a);
}

int main()
{
    int graph[3][3] = {{3, 5, INF},
                       {7, 9, INF},
                       {10, 11, INF}};
    floyd(graph);

    return 0;
}