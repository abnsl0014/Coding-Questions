#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        string s;
        vector<ll>v;
        cin >> n;
        cin >> s;
        for(ll i = 0; i < n; i++) {
            if(s[i] == 'A') {
                v.push_back(i);
            }
        }
        ll x = INT_MIN;
        for(ll i = 0; i < z - 1; i++) {
            x = max(x, v[i+1] - v[i] - 1);
        }
        x = max(x, n - arr[z - 1] - 1);
        cout << x << "\n";
    }
}