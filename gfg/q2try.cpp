#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t;
    cin>>t;
        while(t--) {
            ll i,j,m,n,k,x,ans;
            cin >> n;
            ll a[n+1];
            ll b[n+1];
            ll c[n+1];
            for(ll i = 0; i < n; i++) {
                cin >> a[i];
                cout << a[i];
            }
            if(n < 3) {
                cout << "No\n";
                continue;
            }
            x = a[0];
            b[0] = x;
            for(ll i = 1;i < n; i++) {
                x = min(x, a[i]);
                b[i] = x;
            }
            x = a[n-1];
            c[n-1] = a[n-1];
            for(ll i = n - 2; i >= 0; i--) {
                x = min(x, a[i]);
                c[i] = x;
            }
            ll ok = 0;
            for(ll i = 1; i < n - 1; i++) {
                if(a[i] > b[i-1] && a[i] > c[i+1]) {
                    ok = 1;
                    break;
                }
            }
            if(ok) cout << "Yes\n";
            else cout << "No\n";
        }
} 
