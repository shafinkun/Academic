#include<iostream>
#include<iomanip>
    using namespace std;

    int main()
    {
        int R;
        double res;
        cin>>R;
        res=(4.0/3*3.14159*R*R*R);
        cout<<fixed;
        cout<<setprecision(3)<<"VOLUME = "<<res<<endl;    
        return 0;
     }          