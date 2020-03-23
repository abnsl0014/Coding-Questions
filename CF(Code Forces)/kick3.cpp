#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll getans(ll n, ll k, vector< vector<ll> >&dp, vector< vector<ll> >&dp2, ll p, ll i) {
    if(p == 0) {
        return 0;
    }
    if(p < 0) {
        return INT_MIN;
    }
    if(i > n) {
        return INT_MIN;
    }
    if(dp2[i][p] != -1) return dp2[i][p];
    ll sum = 0;
    for(ll j = 0; j <= k; j++) {
        sum = max(sum, dp[i][j] + getans(n, k, dp, dp2, p - j, i + 1));
    }
    return dp2[i][p] = sum;
}
int main() {
    ll t;
    cin >> t;
    for(ll j = 1; j <= t; j++) {
        ll n, k, p;
        cin >> n >> k >> p;
        vector< vector<ll> >dp((n + 1), vector<ll>((k + 1), -1));
        vector< vector<ll> >dp2((n + 1), vector<ll>((p + 1), -1));
        //ll* a = new ll[n + 1];
        for(ll i = 1; i <= n; i++) {
            for(ll r = 0; r <= k; r++) {
                if(r == 0) dp[i][r] = 0;
                else {
                    ll inp;
                    cin >> inp;
                    dp[i][r] = dp[i][r-1] + inp;
                }
            }
        }
        cout << "Case #"<<j <<": "<< getans(n, k, dp, dp2, p, 1) << "\n";
    }
}