/* Deleting a Specific Key Item from a Linked List
 */
#include <iostream>
using namespace std;
const int MAX_SIZE = 12;

void traverse(int START, int *LINK, string *INFO)
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

void DeleteKey(int &START, string key, int *LINK, string *INFO)
{
    int PTR, PREV;
    PTR = START;
    PREV = -1;
    while (PTR != -1 && INFO[PTR] != key)
    {
        PREV = PTR;
        PTR = LINK[PTR];
    }
    if (PTR == -1)
        return; // Key not found
    if (PREV == -1)
        START = LINK[START]; // Key found at the beginning
    else
        LINK[PREV] = LINK[PTR]; // Key found in the middle
}

int main()
{
    int START = 2;

    int LINK[] = {1, -1, 3, 0};
    string INFO[] = {"you", "shafin!", "I", "hate"};

    cout << "Before deleting: ";
    traverse(START, LINK, INFO);
    DeleteKey(START, "shafin!", LINK, INFO);

    cout << "After deleting: ";
    traverse(START, LINK, INFO);

    return 0;
}
