#include <bits/stdc++.h>
using namespace std;

int LasVegas(vector<int> &v, int sz)
{
    srand(time(0));

    while (1)
    {
        int ind1 = rand() % sz, ind2 = rand() % sz;

        if (ind1 != ind2 and v[ind1] == v[ind2])
            return ind1;
    }
}
int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 7, 1};

    int sz = v.size();

    int index = LasVegas(v, sz);

    cout << "Repeating element: " << v[index] << endl;
    return 0;
}