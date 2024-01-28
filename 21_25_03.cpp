// Concatinate two string without using strcat() function.
/*______________Solved by Shahriar Hasnat Shafin Ahmed_________________*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cout << "Enter the string: ";
    cin >> s1;
    cout << "Enter another string: ";
    cin >> s2;
    
    //Way 1
    s3 = s1 + s2;

    cout << "Concatinated string is: " << s3 << endl;

    //Way 2
    s3 = "";
    for (int i = 0; s1[i] != '\0'; i++)
        s3 += s1[i];
    for (int i = 0; s2[i] != '\0'; i++)
        s3 += s2[i];

    cout << "Concatinated string is: " << s3 << endl;

    return 0;
}