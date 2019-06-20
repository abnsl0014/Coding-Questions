#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     string s;
     cin>>s;
     int n=s.size();
     if(n>10)
     {
         cout<<s[0];
         cout<<n-2;
         cout<<s[n-1];
         cout<<endl;
     }
     else{
        cout<<s<<endl;
     }

  }

}
