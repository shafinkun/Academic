#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
    double a,b,med;
    cin>>fixed>>setprecision(2);
    cin>>a>>b;
    med=(a+b)/2;
    cout<<fixed<<setprecision(4);
    cout<<"MEDIA = "<<med;
    return 0;
}