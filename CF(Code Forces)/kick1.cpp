#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll getans(ll*a, ll n, ll b, ll i, vector< vector<ll> >&dp ) {
    if((i >= n && b >= 0)) {
        return 0;
    }
    // if(b == 0) {
    //     return 0;
    // }
    if(b < 0) {
        return INT_MIN;
    }
   
    if(dp[i][b] != -1) {
        return dp[i][b];
    }
    ll ans = max(1 + getans(a, n, b - a[i], i + 1, dp), getans(a, n, b, i + 1, dp));
    return dp[i][b] = ans;

}


int main() {
    ll t;
    cin >> t;
    for(ll j = 1; j <= t; j++) {
        ll n, b;
        cin >> n >> b;
        ll* a = new ll[n + 1];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector< vector<ll> >dp((n + 1), vector<ll>((b + 1), -1));
            
            // for (ll i = 0; i <= n; i++) 
            // { 
            //     for (ll w = 0; w <= b; w++) 
            //     { 
            //         if (i==0 || w==0) 
            //             dp[i][w%2000] = 0; 
            //         else if (a[i-1] <= w) 
            //                 dp[i][w%2000] = max(1 + dp[i-1][(w-a[i-1])%2000],  dp[i-1][w%2000]); 
            //         else
            //                 dp[i][w%2000] = dp[i-1][w%2000]; 
            //     }
            // } 
           
        //cout << "Case #"<<j <<": "<<dp[n][b%2000] << "\n";
        cout << "Case #"<<j <<": "<<getans(a, n, b, 0, dp)<<"\n";
    }
}
/*
4 100
20 90 40 90
4 50
30 30 10 10
3 300
999 999 999
*/

