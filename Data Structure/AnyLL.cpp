#include <iostream>
using namespace std;

int main()
{
    int str = 2;
    string INFO[] = {"you", "love", "I", "shafin"};
    int LINK[] = {3, 0, 1, -1};

    //delete you
    int pnt = str;
    while(pnt != -1)
    {
        if(INFO[LINK[pnt]] == "you")
        {
            LINK[pnt] = LINK[LINK[pnt]];
            break;
        }
        pnt = LINK[pnt];
    }
    int Pnt = str;
    while(Pnt != -1)
    {
        cout << INFO[Pnt] << ' ';
        Pnt = LINK[Pnt];
    }
}