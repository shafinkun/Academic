#include <iostream>
 
using namespace std;
 
int main() {
 
  int i,j;
  float n;
    cout<<"Give the number of workers: ";
    cin>>i;
    cout<<"Give the worked hours amount: ";
    cin>>j;
    cout<<"Give the monthly salary: ";
    cin>>n;
    cout<<"NUMBER = "<<i<<endl;
    cout<<"SALARY = U$ "<<j*n<<endl;
    return 0;
}