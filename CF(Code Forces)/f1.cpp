#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, s, k;
        cin >> n >> s >> k;
        unordered_map<ll,ll>mp;
        while(k--) {
            ll a;
            cin >> a;
            mp[a] = 1;
        }
        if(mp.find(s) == mp.end()) {
            cout << 0 << "\n";
        }
        else {
            ll cnt1 = 0;
            ll f = 0;
            for(ll i = s; i <=n; i++) {
                if(mp.find(i) == mp.end()) {
                    f = 1;
                    break;
                }
                cnt1++;
            }
            ll cnt2 = 0;
            ll flag = 0;
            for(ll i = s; i >=1; i--) {
                if(mp.find(i) == mp.end()) {
                    flag = 1;
                    break;
                }
                cnt2++;
            }
            if(flag && f) {
                cout << min(cnt1, cnt2) << "\n";
            }
            else if(f) {
                cout << cnt1 <<"\n";
            }
            else {
                cout << cnt2 << "\n";
            }
            
        }
    }
}