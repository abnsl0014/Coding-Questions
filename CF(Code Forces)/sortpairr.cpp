
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
int main() {
    int n;
    cin >> n;
    vector<ll> arr(n), arr2(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for(ll i =0;i <n;i++) {
        arr[i] -= arr2[i];
    }
    sort(arr.begin(), arr.end());
    
    // for(auto i : arr) {
    //     cout<<i<<" ";
    // }
    ll ans = 0;
    for(ll i = 0; i < n ; i++) {
        ll f = arr[i];
        ll cost = (upper_bound(arr.begin() + i + 1, arr.end(), -f) - arr.begin());
        //cout << cost <<" ";
        ans += (n - cost );
    }
    cout << ans << "\n";
}