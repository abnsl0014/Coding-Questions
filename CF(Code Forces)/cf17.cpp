#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int a=(n+m)*r;
    int b=n+(m*r);
    int c=n*m*r;
    int d=n+m+r;
    int e=(n*m)+r;
    int f=n*(m+r);
    int g=max(max(a,b),max(c,d));
    g=max(g,max(c,f));
    cout<<g<<endl;
}


