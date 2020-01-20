#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
    ll t;
    cin >> t;
    double ans = 0.000000000000;
    for(ll i = 1; i <= t; i++) {
        ans += (1.000000000000)/i;
    }
    if(ans == 1) {
        cout << "1.000000000000";
        return 0;
    }
    ans *= 1.000000000000;
    cout << setprecision(12) << fixed << ans;
}
