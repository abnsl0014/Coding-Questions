#include<bits/stdc++.h>
#define ll long long int
using namespace std;


// ll getans(ll*a, ll n, ll b, ll i, vector< vector<ll> >&dp ) {
//     // if(b < 0) {
//     //     return 0;
//     // }
//     if((i == n) || b == 0) {
//         return 0;
//     }
//     if(dp[i][b] != -1) {
//         return dp[i][b];
//     }
//     // if(b == 0) {
//     //     return 1;
//     // }
//     if(a[i] > b) {
//         return dp[i][b] = getans(a, n, b, i + 1, dp);
//     }
//   // ll ans = 0;
//     ll ans = max(1 + getans(a, n, b - a[i], i + 1, dp), getans(a, n, b, i + 1, dp));
//     return dp[i][b] = ans;

// }


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
        vector< vector<ll> >dp((2), vector<ll>((b + 1), -1));
        
            for (ll i = 0; i <= n; i++) 
            { 
                for (ll w = 0; w <= b; w++) 
                { 
                    if (i==0 || w==0) 
                        dp[i%2][w] = 0; 
                    else if (a[i-1] <= w) 
                        dp[i%2][w] = max(1 + dp[(i-1 + 2)%2][(w-a[i-1])],  dp[(i-1 + 2)%2][w]); 
                    else
                        dp[i%2][w] = dp[(i-1 + 2)%2][w]; 
                }
            } 
           
        cout << "Case #"<< j <<": "<<dp[n%2][b] << "\n";
    }
}