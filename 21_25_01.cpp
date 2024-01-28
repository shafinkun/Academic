//Find if there exists a substring in a string and print the index of the first occurrence of the substring. If there is no substring print -1.
/*______________Solved by Shahriar Hasnat Shafin Ahmed_________________*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout << "Enter the string: ";
    cin>>s1;
    cout << "Enter the substring: ";
    cin>>s2;

    int i,j,k,l,m,n;
    l=s1.size();
    m=s2.size();
    
    for(i=0;i<l;i++)
    {
        if(s1[i]==s2[0])
        {
            for(j=0,k=i;j<m;j++,k++)
            {
                if(s1[k]!=s2[j])
                    break;
            }
            if(j==m)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}