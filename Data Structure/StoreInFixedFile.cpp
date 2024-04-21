#include <fstream>
#include <iostream>
#include <cstring> // Include this to use strncpy

using namespace std;

// Define a fixed-length structure for storing text messages
struct Message
{
    char content[100]; // Fixed-length field for message content
};

// Function to store a text message in a file using fixed-length structure
void storeMessageToFile(const string &filename, const string &message)
{
    ofstream file(filename, ios::out | ios::binary); // Open file in binary mode
    if (!file.is_open())
    {
        cerr << "Error: Unable to open file for writing!" << endl;
        return;
    }
    Message msg;
    // Copy message content to structure field
    strncpy(msg.content, message.c_str(), sizeof(msg.content));
    // Write structure to file
    file.write(reinterpret_cast<char *>(&msg), sizeof(Message));
    file.close();
}

int main()
{
    string filename = "message.txt";
    string message = "This is a test message.";
    // Storing the text message in a file
    storeMessageToFile(filename, message);

    cout << "Text message stored in file '" << filename << "' successfully!" << endl;
    
    return 0;
}