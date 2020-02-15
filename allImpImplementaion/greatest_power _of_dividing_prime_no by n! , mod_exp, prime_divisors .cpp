#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007
using namespace std;

vector<ll>v;
ll cnt=0;

ll power(ll x, ll n, ll d = 1000000007) {
    if(x==0 && n==0) return 0;
   if(n==0) return 1;
   ll ans = power(x,n/2,d);
   (ans) = ((ll)ans * ans)%d;
   if(n&1){
       return ((x)*ans + d)%d;
   }
  return (ans)%d;
}

void prime(ll x) {
    if(x%2==0) {
        v.push_back(2);
    }
    while(x%2==0){
        x/=2;
    }    
    for(ll i=3;i<=sqrt(x);i+=2) {
        if(x%i == 0) v.push_back(i);
        while(x%i == 0) {
            x/=i;
        }
    }
    if(x>2){
        v.push_back(x);
    }
}

ll gretestPower(ll n, ll x) {
    ll ans = 0;
    ll r;
    while(n) {
        n/=x;
        ans = ((ans) + (n));
    }
    return ans; 
}
int main() {
    ll x, n;
    cin>>x>>n;
    prime(x);
    // for(ll i=0; i<v.size(); i++) {
    //     cout<<v[i]<<" ";
    // }
    ll f = 1;
    for(ll i=0; i<v.size(); i++) {
        ll  g= power( v[i], greatestPower(n, v[i]) );
        f = ((f%m) * ((g%m)) )%m;
    }
    cout << f;
}