// Storing Complete Binary Tree Data in an Array and Printing Leaf Nodes
#include <iostream>
using namespace std;

// Function to print all leaf nodes of a complete binary tree stored in an array
void printLeafNodes(int tree[], int size)
{
    cout << "Leaf Nodes: ";
    for (int i = size / 2; i < size; ++i)
    {
        cout << tree[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Sample complete binary tree represented as an array
    int tree[] = {1, 2, 3, 4, 5, 6, 7};

    // Printing all leaf nodes
    printLeafNodes(tree, sizeof(tree) / sizeof(tree[0]));

    return 0;
}
