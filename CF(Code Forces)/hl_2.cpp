#include<bits/stdc++.h>
#define ll long long int
#define in(a, n) ll a[n+1]; for(ll i = 0; i < n; i++) cin >> a[i];
using namespace std;

ll count(vector<ll> &arr, ll n, ll k) 
{ 
    ll l = 0; 
    ll r = n - 1; 
    ll leftGreater = n; 
    while (l <= r) { 
        ll m = l + (r - l) / 2; 
        if (arr[m] > k) { 
            leftGreater = m; 
            r = m - 1; 
        } 
        else
            l = m + 1; 
    } 
    return (n - leftGreater); 
} 

int main() {
    ll t;
    cin >> t;
    ll total = t;
    ll ans = 0;
    vector<ll>mxi,mni;
    while(t--) {
        ll n, k;
        ll flag = 0;
        ll mx = INT_MIN, mn = INT_MAX;
        unordered_map<ll,ll>mp;
        multiset<ll>s;
        cin >> n;
        for(ll i = 0; i < n; i++) {
            cin >> k;
            ll r = s.size();
            mx = max(mx, k);
            mn = min(mn, k);
            s.insert(k);
            if((*s.begin() != k)) {
                flag = 1;
            }
             mp[k]++;
        }
        if(flag) {
            cout << "uo\n";
            ans += (2*(total-1) + 1);
           // cout<<ans<<"\n";
            total--;
        }
        else {
            mxi.push_back(mx);
            mni.push_back(mn);
        }
    }
    sort(mxi.begin(), mxi.end());
    for(auto i : mni) {
       // cout << i << "\n";
        ans += (mxi, mxi.size(), i);
       // cout << ans << "\n";
    }
    cout << ans;
}