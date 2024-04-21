// Finding the Index of a Substring in a String using Pattern Function
#include <iostream>
#include <string>
using namespace std;

int findSubstringIndex(const string &str, const string &sub)
{
    int strLength = str.length();
    int subLength = sub.length();

    for (int i = 0; i <= strLength - subLength; i++)
    {
        int j;
        for (j = 0; j < subLength; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }

        if (j == subLength)
            return i; // Return the index if the substring is found
    }

    return -1; // Return -1 if the substring is not found
}

int main()
{
    string str = "hello, world!";
    string sub = "world";

    cout << "Given String: " << str << endl;
    cout << "Substring to find: " << sub << endl;

    int index = findSubstringIndex(str, sub);
    if (index != -1)
        cout << "Substring found at index: " << index << endl;
    else
        cout << "Substring not found." << endl;

    return 0;
}
