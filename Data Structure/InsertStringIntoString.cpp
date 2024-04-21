#include <iostream>
#include <string>
using namespace std;

string insertString(const string &original, const string &toInsert, int position)
{
    string result;
    result.reserve(original.length() + toInsert.length());

    // Copy the characters before the insertion position
    for (int i = 0; i < position; i++)
    {
        result += original[i];
    }

    // Insert the string to be inserted
    for (char ch : toInsert)
    {
        result += ch;
    }

    // Copy the remaining characters from the original string
    for (int i = position; i < original.length(); i++)
    {
        result += original[i];
    }

    return result;
}

int main()
{
    string originalString = "The quick brown fox jumps over the lazy dog.";
    string stringToInsert = "coward ";
    int position = 35;

    string modifiedString = insertString(originalString, stringToInsert, position);

    cout << "Original string: " << originalString << endl;
    cout << "String to insert: " << stringToInsert << endl;
    cout << "Position to insert: " << position << endl;
    cout << "Modified string: " << modifiedString << endl;

    return 0;
}
