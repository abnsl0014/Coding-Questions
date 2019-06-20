#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,s2;
     cin>>s1;
     cin>>s2;
     transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
     for(int i=0;i<s1.size();i++)
     {
        if(s1[i]<s2[i])
        {
            cout<<"-1\n";
            return 0;
        }
        else if(s1[i]>s2[i])
        {
            cout<<"1\n";
            return 0;
        }
     }
     cout<<"0\n";
     return 0;
}

