#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        ll ans = INT_MIN;
        bool ok = false;
        for(int i = 0; i < n; i++) {
            ll d;
            cin >> d;
            if(d == x) {
                ok = true;
            }
            //if(d < x) {
                ans = max(ans, d);
            //}
        }
        if(ok == true) cout << "1\n";
        else {
            if(ans  > x) cout << "2\n";
            else cout << (ll)(ceil(x*1.0 / ans)) << "\n";
        }
    }
}