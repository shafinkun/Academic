/* Traversing Items in a Linked List Data Structure */
#include <bits/stdc++.h>
using namespace std;

void traverse(int START, int* LINK, string* INFO)
{
    int PTR;
    PTR = START;
    while (PTR != -1)
    {
        cout << INFO[PTR] << " ";
        PTR = LINK[PTR];
    }
    cout << endl;
}

int main()
{
    int START = 2;

    // Using array to store the linked list
    int LINK[] = {1, -1, 3, 0};
    string INFO[] = {"you", "shafin!", "I", "hate"};

    traverse(START, LINK, INFO);

    return 0;
}