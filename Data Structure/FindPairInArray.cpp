/* Finding a Pair with the Given Sum in an Array */
#include <iostream>
using namespace std;

bool findPairWithSum(int arr[], int size, int targetSum)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << targetSum << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 2, 6, 5, 3};
    int targetSum = 8;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (!findPairWithSum(arr, size, targetSum))
    {
        cout << "No pair found with the given sum." << endl;
    }

    return 0;
}