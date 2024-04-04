#include<bits/stdc++.h>
using namespace std;

int head[10000], data[100000], nextNode[100000];

int id;


void insert(int x, int y)
{
    data[id] = y;
    nextNode[id] = head[x];
    head[x] = id++;
}

void erase(int x)
{
    head[x] = nextNode[head[x]];
}

int search(int x, int y)
{
    for (int i = head[x]; i != -1; i = nextNode[i])
    {
        if (data[i] == y)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    memset(head, -1, sizeof(head));

    char choice;
    cout << "Do you want to perform any operation? (y/n): ";
    cin >> choice;
    
    if (choice == 'n' || choice == 'N')
    {
        return 0;
    }

    while (true)
    {
        cout << "Enter operation (1 for insert, 2 for erase, 3 for search, 0 to terminate): ";
        int op;
        cin >> op;
        if (op == 0)
        {
            break;
        }

        else if (op == 1)
        {
            cout << "Enter x and y for insertion: ";

            int x, y;
            cin >> x >> y;
            insert(x, y);
        }

        else if (op == 2)
        {
            cout << "Enter x for erase: ";

            int x;
            cin >> x;

            erase(x);
        }
        else if (op == 3)
        {
            cout << "Enter x and y for search: ";

            int x, y;
            cin >> x >> y;

            int result = search(x, y);
            cout << (result ? "Found" : "Not found") << endl;
        }
    }


    return 0;
}