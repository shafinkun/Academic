#include <bits/stdc++.h>
using namespace std;

void print_Val(int i)
{
    cout << i << endl;
}

int main()
{
    cout << "Let's use for-each loop to print vector elements: ";
    vector<int> v = {10, 20, 30, 40, 50, 60};

    for_each(v.begin(), v.end(), print_Val);

    return 0;
}