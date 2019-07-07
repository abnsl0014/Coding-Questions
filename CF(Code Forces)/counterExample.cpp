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

bool check(ll n, ll m) {
     for (ll i = n; i <= m; i++) {
        for(ll j = i+1; j <= m; j++) {
            for(ll k =j+1; k <= m; k++) {
                if(__gcd(i,j)==1 && __gcd(j,k)==1 && __gcd(i,k)!=1) {
                    cout<<i<<" "<<j<<" "<<k;
                    return false;
                }
            }
        }
    }
    return true;
}
int main() {
    SPEED
    ll n, m, x = 1, ans;
    cin >> n >> m;
    if (check(n,m)) cout<<-1;
    return 0;
}