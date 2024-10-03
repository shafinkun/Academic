#include <bits/stdc++.h>
using namespace std;

vector<float> x(100, 0.0);

vector<float> knapSack(int n, int W, int v[], int w[])
{
    int u = W;
    int i;
    for (i = 0; i < n; i++)
    {
        if (w[i] > u)
            break;

        x[i] = 1.0;
        u -= w[i];
    }
    if (i < n)
        x[i] = (float)u / w[i];

    return x;
}
int main()
{
    int v[] = {24, 15, 25};
    int w[] = {15, 10, 18};

    int n = 3;
    int W = 20;
    knapSack(n, W, v, w);

    for (int i = 0; i < n; i++)
        cout << x[i] << " ";

    return 0;
}