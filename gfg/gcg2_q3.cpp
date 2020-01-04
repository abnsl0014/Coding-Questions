#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t;
    cin>>t;
        while(t--) {
            ll i,j,m,n,k,x,ans;
            cin >> n;
            ll a[n+1]={};
            unordered_map<ll ,priority_queue <ll, vector<ll>, greater<ll> > >mp;
            for(ll i = 0; i < n; i++) {
                cin >> a[i];
                if(mp.find(a[i]) == mp.end() && mp[a[i]].size() == 0) {
                    mp[a[i]].push(i);
                   // cout << i;
                }
                else {
                   ll g = mp[a[i]].top();
                   //cout << g << endl;
                   a[g]++;
                   mp[a[i]].pop();
                   mp[a[i] + 1].push(g);
                    mp[a[i]].push(i);
                }
            }
            for(ll i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
}