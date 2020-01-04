#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        ll a[n+1];
        ll sum = 0, xor = 0;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            xor ^= a[i];
        }
        if(sum == 2*xor) {
            cout << 0 << "\n\n";
        }
        cout << 2 << "\n";
        cout << xor << " " << sum + xor << "\n";
    }
}