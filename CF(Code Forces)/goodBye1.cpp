#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t;
    cin>>t;
        while(t--) {
            ll i,j,m,n,k = INT_MIN,x = INT_MIN,ans = 0;
            ll k1, k2;
            unordered_map<ll,ll>mp;
            cin >> n ;
            for(ll i = 0; i < k1; i++) {
                cin >> m;
                k = max(k, m);
            } 
            for(ll i = 0; i < k2; i++) {
                cin >> m;
                x = max(x, m);
            } 
            if(k > x) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
            // ll a[n+1]={};
            // for(ll i = 0; i < n; i++) {
            //     cin >> a[i];
            // }

        }
}