#include<bits/stdc++.h>
#define ll long long int
#define in(a, n) ll a[n+1]; for(ll i = 0; i < n; i++) cin >> a[i];
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll mx = INT_MIN;
         vector<ll>v;
        for(ll i = 0; i < s.length(); i++) {
            if(s[i] == 'A') {
                v.push_back(i);
            }
        }
        if(v.size() == 1 && s[s.length()-1] == 'A') {
            cout << "0\n";
        }
        else {
            for(ll i = 1; i < v.size(); i++) {
                mx = max(mx, (v[i] - v[i-1] -1));
            }
            ll k = v[v.size() - 1];
            mx = max(mx, (n - (k+1)));
            cout << mx << "\n";
        }
    }
}