#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int ch=0,ce=0,cl=0,cll=0,co=0;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='h'&& ch==0)
      {
          ch++;
      }
      else if(s[i]=='e'&&ch!=0&&ce==0)
      {
          ce++;
      }
      else if(s[i]=='l'&&cl==0&&ce!=0&&ch!=0)
      {
          cl++;
      }
       else if(s[i]=='l'&&cll==0&&ce!=0&&ch!=0&&cl!=0)
      {
          cll++;
      }
       else if(s[i]=='o'&&co==0&&ce!=0&&ch!=0&&cl!=0&&cll!=0)
      {
          co++;
      }
  }
  if(ch==1&&ce==1&&cl==1&&cll==1&&co==1)
  {
      cout<<"YES\n";

  }
  else{
    cout<<"NO\n";
  }
}
