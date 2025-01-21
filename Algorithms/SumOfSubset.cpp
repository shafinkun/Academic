#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int mySet[N];
vector<vector<int>> allSubsets;

void SOS(int sz, int target, vector<int> &ans)
{
    if (target == 0)
    {
        allSubsets.push_back(ans);
        return;
    }
    if (sz < 0 or target < 0)
        return;

    ans.push_back(mySet[sz]);
    cout << "Recursion for " << target << endl;
    SOS(sz - 1, target - mySet[sz], ans);

    ans.pop_back();
    cout << "Recursion for " << target << endl; 
    SOS(sz - 1, target, ans);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the set: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
        cin >> mySet[i];

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    vector<int> ans;
    SOS(n - 1, target, ans);

    if (allSubsets.empty())
    {
        cout << "No subsets found that sum to the target" << endl;
    }
    else
    {
        cout << "Subsets that sum to the target: " << endl;
        for (auto &x : allSubsets)
        {
            cout << "{ ";
            for (int num : x)
            {
                cout << num << " ";
            }
            cout << "}" << endl;
        }
    }

    return 0;
}