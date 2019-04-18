#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,b,c,ca=0,cb=0,cc=0;
  cin>>n;
  while(n--)
  {
      cin>>a;
      ca+=a;
      cin>>b;
      cb+=b;
      cin>>c;
      cc+=c;
  }
  if(ca==0&&cb==0&&cc==0)
  {
      cout<<"YES";
      cout<<endl;
  }
  else{
    cout<<"NO\n";
  }
}
