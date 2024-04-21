// Inserting an Item at the Beginning of a Linked List

#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 12;

void traverse(int START, int LINK[], string INFO[])
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

void insert(int &START, int POS, int LINK[], string INFO[], string ITEM, int &AVAIL)
{
    int PTR, COUNT, NEW;
    NEW = AVAIL;
    INFO[NEW] = ITEM;
    LINK[NEW] = 0;

    if (POS == 1)
    {
        LINK[NEW] = START;
        START = NEW;
    }
    else
    {
        PTR = START;
        COUNT = 1;

        while (COUNT < POS - 1)
        {
            PTR = LINK[PTR];
            COUNT++;
        }

        LINK[NEW] = LINK[PTR];
        LINK[PTR] = NEW;
    }
    AVAIL++;
}

int main()
{
    int START = 2;
    int AVAIL = 4;

    int LINK[MAX_SIZE] = {1, -1, 3, 0};
    string INFO[MAX_SIZE] = {"you", "shafin!", "I", "hate"};

    cout << "Before adding an item: ";
    traverse(START, LINK, INFO);

    insert(START, 1, LINK, INFO, "Yes,", AVAIL);
    
    cout << "After adding an item: ";
    traverse(START, LINK, INFO);

    return 0;
}
