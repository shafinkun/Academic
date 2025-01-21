// Implement an List and implement the following functions:
// 1. Insert an element
// 2. Delete an element
// 3. Traverse the list
// 4. Bubble sort the list
// 5. Marge two lists
// 6. Search an element

/*____________________Solved by Shahriar Hasnat Shafin Ahmed___________________*/

#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100

int insert(int arr[], int &n, int val)
{
    if (n >= MAX_SIZE)
    {
        return -1;
    }
    arr[n] = val;
    n++;
    return 0;
}

void deleteElement(int arr[], int &n, int val)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            break;
        }
    }
    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
}

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeLists(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[i + n1] = arr2[i];
    }
}

int search(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

void display(int a[], int sz)
{
    cout << "Array is: ";
    for(int i = 0; i < sz; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int arr1[MAX_SIZE] = {5, 3, 2, 4, 1};
    int arr2[MAX_SIZE] = {10, 8, 7, 9, 6, 11};
    int merged[MAX_SIZE * 2];
    int n1 = 5;
    int n2 = 6;


    // // Traverse the list
    cout << "Array no. 1: ";
    traverse(arr1, n1); // works same as display


    // Insert an element
    cout << "After inserting 0 ";
    insert(arr1, n1, 0); 
    display(arr1, n1);


    // // Delete an element
    cout << "After deleting 0 ";
    deleteElement(arr1, n1, 0); 
    display(arr1, n1); //as in the deleteElement() n1 is given as reference so n1 will automatically updated



    // // Merge two lists
    cout << "After merging ";
    mergeLists(arr1, n1, arr2, n2, merged); // merged becomes {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    display(merged, n1 + n2);


    // // Search an element
    int look = 0;
    int index = search(merged, n1 + n2, look);
    cout << look << " is ";
    
    if(index != -1)
    {
        cout << "at " << index << endl;
    }
    else
    {
        cout << "not available" << endl;
    }
    

    // // Bubble sort the list
    cout << "After soring ";
    bubbleSort(merged, n1 + n2);
    display(merged, n1 + n2);

    

    return 0;
}