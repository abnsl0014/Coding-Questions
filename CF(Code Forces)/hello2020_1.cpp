#include<bits/stdc++.h>
#define ll long long int
#define in(a, n) ll a[n+1]; for(ll i = 0; i < n; i++) cin >> a[i];
using namespace std;

int main() {
    ll t, n, k;
    cin >> n >> k;
    unordered_map<ll,string>mp1,mp2;
    for(ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp1[i] = s;
    }
    for(ll i = 0; i < k; i++) {
        string s;
        cin >> s;
        mp2[i] = s;
    }
    cin >> t;
    while(t--) {
        ll q;
        cin >> q;
        ll q1 = (q-1)%(n);
        ll q2 = (q-1)%(k);
        cout << mp1[q1] << mp2[q2] << "\n";

    }
}