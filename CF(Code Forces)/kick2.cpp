#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    for(ll j = 1; j <= t; j++) {
        ll n, k;
        cin >> n >> k;
        ll* a = new ll[n + 1];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll diff = INT_MIN;
        set<ll>s;
        for(ll i = 0; i < n-1; i++) {
            s.insert(a[i+1] - a[i]);
            diff = max(diff, a[i+1] - a[i]);
        }
        ll last = *s.rbegin();
        s.erase(last);
        s.insert((ll)(ceil(last*1.0/2)));
        cout << "Case #"<<j <<": "<<*s.rbegin()<< "\n";
    }
}