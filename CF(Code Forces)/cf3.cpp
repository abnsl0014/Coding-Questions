#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]!='A'&&s[i]!='a'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y')
         {
            cout<<".";
            int r=122-s[i];
            if(r>25)
            {
                char b=32+s[i];
                cout<<b;
            }
            else{
                cout<<s[i];
            }
         }
     }
}
