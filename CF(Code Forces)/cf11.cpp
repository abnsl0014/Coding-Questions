#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,maxi,maxii=1,mini,minii=1;
    cin>>n;
    cin>>a;
    maxi=a;
    mini=a;
    for(int i=2;i<=n;i++)
    {
        cin>>a;
        if(a>maxi)
        {
            maxi=a;
            maxii=i;
        }
        if(a<=mini)
        {
            mini=a;
            minii=i;
        }
    }
    if(minii<maxii){
    cout<<abs(maxii-1)+abs(minii-n)-1;
    cout<<endl;
    }
    else{
        cout<<abs(maxii-1)+abs(minii-n);
        cout<<endl;
    }
}


