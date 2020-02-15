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

bool small(ll *a, ll j, ll x, ll n) {
    ll f = 0;
    ll cnt = j-1;
    while(f < x && cnt < n) {
        if(a[cnt] < a[j]) {
            return false;
        }
        cnt--;
        f++;
    }
    return true;
}
bool big(ll* a, ll j, ll x,ll n) {
    ll f = 0;
    ll cnt = j+1;
    while(f < x && cnt < n) {
        if(a[cnt] < a[j]) {
            return false;
        }
        cnt++;
        f++;
    }
    return true;
}
int main() {
    SPEED
    ll n,m,x,y,ans;
    cin>>n>>x>>y;
    in(a,n)
    for(int i=x;i<n;i++){
        if(small(a,i,x,n) || big(a,i,y,n)) {
            cout<<i+1;
            break;
        }
    }
    return 0;
}