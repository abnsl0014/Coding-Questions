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
#define br cout<<'\n';
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;
vector<vector<ll> >dp(5000, vector<ll>(5000, -1));
ll getans(ll*a, ll n, ll h, ll l, ll r, ll s, ll sum) {
    if(s > n) {
        return 0; 
    }
    ll ans = 0;
    sum%=h;
    if(dp[s][sum] != -1) {
        return dp[s][sum];
    }
    if(s != 0) {
        if((sum >= l) && (sum <= r)) {
            ans +=1;
        }
    }
    ans += max((getans(a, n, h, l, r, s + 1, (sum + a[s]))), getans(a, n, h, l, r, s + 1, (sum + a[s] - 1)));
    return  dp[s][sum] = ans;  
}
int main() {
    ll n, h, l, r;
    cin >> n >> h >> l >> r;
    in(a, n)
    // if(l == 0) {
    //     cout << (ll)getans(a, n, h, l, r, 0, 0) - 1 << "\n";
    //     return 0;
    // }
    cout << (ll)getans(a, n, h, l, r, 0, 0) << "\n";
    for(int i = 0; i < dp.size(); i++) {
        int t = 0;
        for(int j = 0; j < dp[0].size(); j++) {
            if(dp[i][j] != -1) {
                cout << dp[i][j] <<" ";
                t = 1;
            }
        }
        if(t)cout << "\n";
    }
}