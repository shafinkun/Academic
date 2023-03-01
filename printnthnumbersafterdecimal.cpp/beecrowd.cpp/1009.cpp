#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
    char name[50];
    double a,b;
    cout<<"What's your name? ";
    cin>>name;
    cout<<"Monthly salary: ";
    cin>>a;
    cout<<"Total sale: ";
    cin>>b;
    float c=(a+(b*.15));
    cout<<fixed;
    cout<<setprecision(2)<<"TOTAL = R$ "<<c<<endl;
    return 0;
}          