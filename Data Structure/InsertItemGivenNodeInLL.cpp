// Inserting an Item After a Given Node in a Linked List
#include <iostream>
using namespace std;
const int MAX_SIZE = 12;

void insertAfterNode(int &START, int LINK[], char INFO[], char nodeItem, char newItem)
{
    int PTR = START;
    while (PTR != -1 && INFO[PTR] != nodeItem)
    {
        PTR = LINK[PTR];
    }
    if (PTR != -1)
    {
        int newNode = -1;
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            if (INFO[i] == ' ')
            {
                newNode = i;
                break;
            }
        }
        if (newNode != -1)
        {
            INFO[newNode] = newItem;
            LINK[newNode] = LINK[PTR];
            LINK[PTR] = newNode;
        }
        else
        {
            cout << "No space available for new node." << endl;
        }
    }
    else
    {
        cout << "Node containing '" << nodeItem << "' not found." << endl;
    }
}

int main()
{
    int START = 1;
    int LINK[MAX_SIZE] = {-1, 2, 4, 6, 8, 10, -1, -1, -1, -1, -1, -1};
    char INFO[MAX_SIZE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', ' '};
    char nodeItem = 'E';
    char newItem = 'X';

    // Inserting the new item after a given node
    cout << "Inserting the new item '" << newItem << "' after the node containing '" << nodeItem << "'..." << endl;
    insertAfterNode(START, LINK, INFO, nodeItem, newItem);

    // Printing the updated linked list
    cout << "Updated linked list after insertion: ";
    int PTR = START;
    while (PTR != -1)
    {
        cout << INFO[PTR] << " ";
        PTR = LINK[PTR];
    }
    cout << endl;

    return 0;
}
