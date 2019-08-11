#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n,i=1,ans=0;
        cin>>n;
        while(pow(5,i)<=n) {
            ans+=n/pow(5,i);
            i++;
        }
        cout<<ans<<endl;
    }
}