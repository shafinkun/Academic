#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
    int a,b,x,y;
    float c,z,i;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    i=((b*c)+(y*z));
    cout<<fixed;
    cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<i<<endl;
 
    return 0;
}