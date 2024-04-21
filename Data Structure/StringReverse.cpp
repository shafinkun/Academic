#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &str)
{
    string reversedStr = str;
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        swap(reversedStr[left], reversedStr[right]);
        left++;
        right--;
    }
    return reversedStr;
}

int main()
{
    string str = "Hello, world!";
    // Reversing the given string
    string reversedStr = reverseString(str);

    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversedStr << endl;
    
    return 0;
}
