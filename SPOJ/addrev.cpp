#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll len=0;

ll rev(ll a) {
    ll  sum = 0;
     len = 0;
    while(a > 0) {
        sum = sum*10 +a%10;
        a/=10;
        len++;
    }
    return sum;
}
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a,b;
        cin>>a>>b;
        ll g=rev(a);
       // cout<<g<<endl;
        ll k=len;
        ll r=rev(b);
        //cout<<r<<endl;
        ll d=len;
        ll zero = max(k,d);
        ll m=rev(g+r);
        //cout<<m<<endl;
        ll fl=len;
        //cout<<fl<<endl;
        //cout<<zero<<endl;
        if(fl<zero) cout<<m*pow(10,(zero-fl))<<endl;
        else {
            cout<<m<<endl;
          //  cout<<'u';
        }
    }
    
    
}