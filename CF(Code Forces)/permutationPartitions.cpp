#include<bits/stdc++.h>
#define ll long long int
#define M 998244353
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll* a = new ll[n+1];
    ll* b = new ll[n+1];
    unordered_map<ll, ll>mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        mp[a[i]] = i;
    }
    sort(b, b + n);
    ll sum = 0;
    ll ans = 1;
    vector<ll>v;
    for(int i = n - 1; i >= n - k; i--) {
        sum += b[i];
        v.push_back(mp[b[i]]);
        //ans = (ans*abs(mp[b[i]] - mp[b[i-1]]))%M;
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); i++) {
        ans = ans*(v[i] - v[i-1])%M;
    }
    //sum += b[n-k];
    cout << sum << " " << ans << "\n";
    delete[] a;
    delete[] b;
    v.clear();
    mp.clear(); 

}