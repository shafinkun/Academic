/*______________________Implementation of Linked List_______________________*/
/*__________________Solved by Shahriar Hasnat Shafin Ahmed__________________*/

#include <bits/stdc++.h>
using namespace std;

void traverse(int START, vector<int> &LINK, vector<string> &INFO)
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

void insert(int &START, int POS, vector<int> &LINK, vector<string> &INFO, string ITEM)
{
    int PTR, COUNT, AVAIL, NEW;
    AVAIL = INFO.size();
    NEW = AVAIL;
    INFO.push_back(ITEM);
    LINK.push_back(0);

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
}

void Delete(int &START, int POS, vector<int> &LINK, vector<string> &INFO)
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

    // I used vector to store the linked list because it is dynamic
    vector<int> LINK = {1, -1, 3, 0};
    vector<string> INFO = {"you", "shafin!", "I", "hate"};

    traverse(START, LINK, INFO);

    // Let's delete "hate" and put "love" in the 2nd position
    Delete(START, 2, LINK, INFO);
    traverse(START, LINK, INFO);

    insert(START, 2, LINK, INFO, "love");
    traverse(START, LINK, INFO);

    return 0;
}