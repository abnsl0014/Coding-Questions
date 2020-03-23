#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=0;i<n;++i)
#define in(a,n) ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<' ';br
#define printv(v) vector<ll> :: iterator it;for(it=v.begin();it!=v.end();it++)cout<<*it<<' ';br
#define print2(a,b) cout<<a<<' '<<b;br
#define print3(a,b,c) cout<<a<<' '<<b<<' '<<c;br
#define sum(a,n) ll sum=0;for(ll i=0;i<n;i++)sum+=a[i];
#define br cout<<'\n';
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;
int main(){
   // SPEED
    ll t;
    cin >> t;
    while(t--) {
        ll i,j,k,n,m,c,x,y,b,ans;
        unordered_map<ll,ll>mp;
        cin >> n ;
        ll ok = 0;
        ll idx = -1;
        for(ll i = 0; i < n; i++) {
            cin >> k;
            ll ko = 0;
            for(ll j = 0; j < k; j++) {
                ll inp;
                cin >> inp;
                if(mp.find(inp) == mp.end() && (ko == 0)) {
                    mp[inp] = 1;
                    ko = 1;
                }
            }
            if(ko == 0) {
                ok = 1;
                idx = i;
            }
        }
        if(ok) {
            ll i;
            for(i = 1; i <= n; i++) {
                if(mp.find(i) == mp.end()) {
                    break;
                }
            }
            cout << "IMPROVE\n";
            cout << idx + 1 <<" "<< i << "\n";
        }
        else {
            cout << "OPTIMAL\n";
        }
    }
}