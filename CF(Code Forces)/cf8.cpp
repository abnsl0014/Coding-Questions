#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%74==0)
    {
        cout<<"YES\n";
        return 0;
    }
    while(n){
    r=n%10;
    if(r!=4 && r!=7)
    {
        cout<<"NO\n";
        return 0;
    }
    n=n/10;
    }

    cout<<"YES\n";
    return 0;
}
