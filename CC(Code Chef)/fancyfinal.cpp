#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    //char a,b;
    char ch;
    ch=cin.get();
    vector<char>v;
    int counter=0;
    while(ch!='\n')
    {
        v.push_back(ch);
        ch=cin.get();
    }
    int r=v.size();
    if(v.size()>=4)
    if((v[0]=='n'&&v[1]=='o'&&v[2]=='t'&&v[3]==' ')||(v[r-4]==' '&&v[r-3]=='n'&&v[r-2]=='o'&&v[r-1]=='t'))
    {
        counter=1;
    }
   for(int i=0;i<v.size()-4;i++)
   {
       if(v[i]==' '&&v[i+1]=='n'&&v[i+2]=='o'&&v[i+3]=='t'&&v[i+4]==' ')
       {
           counter=1;

       }

   }
    counter==1 ? cout<<"Real Fancy"<<endl:cout<<"regularly fancy"<<endl;
  }
  return 0;
}
