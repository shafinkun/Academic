#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,j;
    cout<<"Give any float number: ";
    cin>>n;
    cout<<"Give n for decimal to print: ";
    cin>>j;
    cout<<fixed<<setprecision(j);
    cout<<"The number is: "<<n<<endl;
    return 0;
}