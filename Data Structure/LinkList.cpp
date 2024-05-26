#include <iostream>
using namespace std;

int main()
{
    int Str = 3;
    int INFO[5] = {2, 5, 8, 10, 3};
    int LINK[5] = {2, 4, 1, 0, -1};

    int pnt = Str;
    while(pnt != -1)
    {
        cout << INFO[pnt] << ' ';
        pnt = LINK[pnt];
    }



    return 0;
}