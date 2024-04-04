// Linked list insertion
/*__________________Solved by Shahriar Hasnat Shafin Ahmed__________________*/
#include <bits/stdc++.h>
using namespace std;

void insert(int pos, string new_data, int START, int LINK[], string INFO[], int size)
{
    // Check if the array is full
    if (size == 5)
    {
        cout << "Overflow";
        return;
    }

    // Shift elements to the right of the position
    for (int i = size; i > pos; i--)
    {
        INFO[i] = INFO[i - 1];
        LINK[i] = LINK[i - 1];
    }

    // Insert new element and update link
    INFO[pos] = new_data;
    LINK[pos] = pos + 1;

    // If inserting at the end, update the link to -1
    if (pos == size)
    {
        LINK[pos] = -1;
    }

    // If inserting at the start, update START
    if (pos == 0)
    {
        START = 0;
    }

    // Increment size
    size++;
}

int main()
{
    int START = 2, PTR, LINK[5] = {4, -1, 3, 0, 1};
    string INFO[6] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
    int size = 5;

    insert(2, "Mango", START, LINK, INFO, size);
    PTR = START;
    while (PTR != -1)
    {
        cout << INFO[PTR] << ", ";
        PTR = LINK[PTR];
    }

    return 0;
}