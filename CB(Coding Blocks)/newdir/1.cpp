#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=0;i<n;++i)
#define in(a,n) ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<' ';br
#define printv(v) vector<ll> :: iterator it;for(it=v.begin();it!=v.end();it++)cout<<*it<<' ';br
#define print2(a,b) cout<<a<<' '<<b;br
#define print3(a,b,c) cout<<a<<' '<<b<<' '<<c;br
#define sum(a,n) ll sum=0;for(ll i=0;i<n;i++)sum+=a[i];
#define br cout<<endl;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;

ll cal(ll k) {
    ll s=0;
    while(k > 0) {
        ll r = k%10;
        s+=r;
        k=k/10;
    }
    return s;
}
int main(){
SPEED
ll t;
cin>>t;
while(t--){
ll n,m,x,ans = INT_MIN;
cin>>n;
in(a,n)
for(int i=0;i<n - 1;i++) {
    for(int j=i+1;j<n;j++) {
        ans = max (ans ,cal(a[i]*a[j]));
    }
}
cout<<ans<<endl;
}
return 0;
}