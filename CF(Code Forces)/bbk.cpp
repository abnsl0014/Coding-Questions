#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll chk(ll S1, ll S2) {
    return ((S1 | (S1 & S2)) ^ (S2 & (S2 | S1));
}

nt main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a[n+1];
        for(ll i=0;i<n;i++) {
            cin >> a[i];
        }
        ans = INT_MIN;
        for(ll i = 0; i < n - 1;i++) {
            for(ll j = i+1; j < n; j++) {
                ans = max(ans, chk(a[i], a[j]));
            }
        }
        cout << ans << "\n";
    }
}