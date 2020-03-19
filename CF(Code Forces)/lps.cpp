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

int getans(ll* s, int st, int e, vector<vector<int> >&dp) {
        if(st == e) {
            return 1;
        }
        if(st > e) {
            return 0;
        }
        if(dp[st][e] != -1) return dp[st][e];
        if(s[st] == s[e]) {
            return dp[st][e] = (2 + getans(s, st + 1, e - 1, dp));
        }
        else {
            return dp[st][e] = max(getans(s, st, e - 1, dp), getans(s, st + 1, e, dp));
        }
}
int main(){
    SPEED
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        in(s, n)
        vector<vector<int> >dp(n, vector<int>(n, -1));
        if(getans(s, 0, n - 1, dp) >= 3) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}