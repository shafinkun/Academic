/* Searching for a Key Item in a Linked List */
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

int Search(int START, string key, int *LINK, string *INFO)
{
    int PTR, POSITION;
    PTR = START;
    POSITION = 1;
    while (PTR != -1 && INFO[PTR] != key)
    {
        PTR = LINK[PTR];
        POSITION++;
    }
    if (PTR == -1)
        return -1; 
    else
        return POSITION; 
}

int main()
{
    int START = 2;

    int LINK[] = {1, -1, 3, 0};
    string INFO[] = {"you", "shafin", "I", "hate"};

    cout << "Given Linked List: ";
    traverse(START, LINK, INFO);

    string key = "shafin";
    int position = Search(START, key, LINK, INFO);

    if (position != -1)
        cout << key << " found at position: " << position << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}
