#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll m, n;
        cin >> n >> m;
        vector<ll>a(n), b(m), temp(n);
        //ll* b = new ll[n + 1];
        //ll* temp = new ll[m + 1];
        for(int i = 0; i < n; i++) {
            ll d;
            cin >> d;
            a.push_back(d);
            temp.push_back(d);
        }
        for(int i = 0; i < m; i++) {
            ll d;
            cin >> d;
            d--;
            b.push_back(d);
        }
        sort(b.begin(), b.end());
        for(int i = 0; i < m - 1; i++) {
            ll st = b[i];
            ll en = b[i];
            while((i < m - 1) && ((b[i] + 1)== b[i+1])) {
                en = b[i + 1];
                i++;
            }
            if(i != m - 2) {
                en = b[i+1];
            }
            // vector<ll>v;
            // for(int i = st; i <= en; i++) {
            //     v.push_back(a[i]);
            // }
            // sort(v.begin(), v.end());
            // for(auto j : v) {
            //     cout << "v" << j << " ";
            // }
            // cout << "\n";
            // ll cnt = 0;
            // for(int i = st; i <= en; i++) {
            //     a[i] = v[cnt++];
            // }
            sort(a.begin() + st, a.begin() + en + 1);
        }
        for(int i = 0; i < n; i++) {
            cout << a[i] <<" ";
        }
        cout << "\n";
        // ll ok = 0;
        // for(int i = 0; i < m; i++) {
        //     if(a[i] != temp[i]) {
        //         ok = 1;
        //         break;
        //     }
        // }
        // if(ok) cout << "NO\n";
        // else cout << "YES\n";
    }
}