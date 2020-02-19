#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=0;i<n;++i)
#define in(a,n) double a[n];for(ll i=0;i<n;i++)cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<' ';br
#define printv(v) vector<ll> :: iterator it;for(it=v.begin();it!=v.end();it++)cout<<*it<<' ';br
#define print2(a,b) cout<<a<<' '<<b;br
#define print3(a,b,c) cout<<a<<' '<<b<<' '<<c;br
#define sum(a,n) ll sum=0;for(ll i=0;i<n;i++)sum+=a[i];
#define br cout<<endl;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, x;
        ll sum = 0;
        cin >> n >> x;
        in(a, n)
        //sort(a, a+n);
        ll ans;
        ll mn = INT_MAX;
        ll mx = INT_MIN;
        for(ll i = 0; i < n; i++) {
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);
        }
        if( x >= mx) {
            cout << (x)/mx << "\n";
        }
        else if(x == 0) {
            cout << 0 << "\n";
        }
        else if( x == mn) {
            cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        }
        // for(ll i = 0; i < n; i++) {
        //     sum += a[i];
        // }
        // if(sum == x) {
        //     cout << n << "\n";
        // }
        // else {
        //     cout << (ll)ceil((double)sum/x) << "\n";
        // }
    }
}