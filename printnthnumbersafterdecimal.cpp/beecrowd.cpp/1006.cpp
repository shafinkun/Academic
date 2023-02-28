#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
 
   double a,b,c,d;
   
   cin>>a>>b>>c;
   d=(a*2+b*3+c*5)/(2+3+5);
   cout<<fixed<<setprecision(1);
   cout<<"MEDIA = "<<d<<endl;
   return 0;
}