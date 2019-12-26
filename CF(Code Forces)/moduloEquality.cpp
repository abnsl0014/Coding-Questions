#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPerm(ll* a, ll* b, ll n) {
    unordered_map<ll ,ll> mp;
    for(ll i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    for(ll i = 0; i < n; i++) {
        if(mp.find(b[i]) != mp.end() )
            mp[b[i]]--;
    }
    for(auto i:mp) {
        if(i.second != 0)
            return false;
    }
    return true;
}

int main() {
    ll n, m;
    ll ans = INT_MAX;
    cin >> n >> m;
    ll a1[n+1];
    ll a2[n+1];
    for(ll i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> a2[i];
    }
    ll x1[n+1];
    for(ll i = 0; i < n; i++) {
        ll x = (a2[i] - a1[0] + m)% m;
        for(ll j = 0; j < n; j++) {
            x1[j] = (a1[j] + x)%m;
        }
        if(isPerm(x1, a2, n)) {
            ans = min(ans, x);
        }
    }
    cout << ans;
}