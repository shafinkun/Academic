/* Deleting the First Item from a Linked List */
#include <iostream>
using namespace std;
const int MAX_SIZE = 12;

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

void Delete(int &START, int POS, int* LINK, string* INFO)
{
    int PTR, COUNT;
    PTR = START;
    COUNT = 1;
    if (POS == 1)
    {
        START = LINK[START];
    }
    else
    {
        while (COUNT < POS - 1)
        {
            PTR = LINK[PTR];
            COUNT++;
        }
        LINK[PTR] = LINK[LINK[PTR]];
    }
}

int main()
{
     int START = 2;

    int LINK[] = {1, -1, 3, 0};
    string INFO[] = {"you", "shafin!", "I", "hate"};

    cout << "Before deleting: ";
    traverse(START, LINK, INFO);
    Delete(START, 1, LINK, INFO);

    cout << "After deleting: ";
    traverse(START, LINK, INFO);


    return 0;
}
