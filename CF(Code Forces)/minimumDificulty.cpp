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
#define br cout<<endl;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;
int main() {
    SPEED
    ll n, m, x, ans = INT_MIN, fans = INT_MAX;
    cin >> n;
    in( a,n)
    for (ll i = 1; i < n-1; i++) {
         ans = INT_MIN;
        for (ll j = 1; j < n-1; j++) {

            if (i==j) {
                ans = max (ans, a[j+1] - a[j-1]);
                j++;
            } 
            else ans = max (ans,a[j]-a[j-1]);

            if(i==n-2) ans =max(ans,a[n-1]-a[n-3]);
            else ans =max(ans,a[n-1]-a[n-2]);
        }
        fans =min(fans,ans);
    }
    cout << fans;
    return 0;
}