// Linked list traversing
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
}

void insert(string item, int pos, int START, vector<int> &LINK, vector<string> &INFO)
{
    INFO.push_back(item);
}

int main()
{
    int START = 2, PTR;

    //used vector to store the strings because it is dynamic
    vector<int> LINK = {4, -1, 3, 0, 1};
    vector<string> INFO = {"you", "shafin", "I", "love", ""};
    
    traverse(START, LINK, INFO);


    

    return 0;
}