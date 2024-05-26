#include <iostream>
using namespace std;

int main()
{
    int str = 2;
    string INFO[] = {"you", "love", "I", "shafin"};
    int LINK[] = {3, 0, 1, -1};

    // shafin k delete kora lagbe

    for (int i = 0; i < 4; ++i)
    {
        if (LINK[i] == 3)
        {
            LINK[i] = -1;
            break;
        }
    }
    int pnt = str;
    while(pnt != -1)
    {
        cout << INFO[pnt] << ' ';
        pnt = LINK[pnt];
    }
    cout << endl;

    return 0;
}