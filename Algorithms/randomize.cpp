#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int pick = rand() % (n);

    cout << "Random pick: " << v[pick] << endl;

    return 0;
}