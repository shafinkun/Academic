#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    unsigned long long factorial = 1;
    cout << "Enter number: ";
    cin >> number;

    if(number < 0)
        cout << "Not valid number!" << endl;
    else
    {
        int i = 1;
        do{
            factorial *= i;
            i++;
        }while(i <= number);

        cout << "Factorial of" << number << " = " << factorial << endl;
    }

    return 0;
}