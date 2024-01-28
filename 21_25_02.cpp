//Find the length of a string without using strlen() function.
/*______________Solved by Shahriar Hasnat Shafin Ahmed_________________*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin>>s;

    int size = 0;
    for(int i=0; s[i]!='\0'; i++)
        size++;
    
    cout << "Length of the string is: " << size << endl;
    
    return 0;
}