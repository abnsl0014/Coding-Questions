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
    SPEED
    ll n, m, x;
    double ans = INT_MIN;
    cin >> n >> x;
    in(a ,n)
    sort ( a, a + n );
    ans = max ( ans , (double)a[0]-0.0000000000);
    ans = max ( ans , (double)x - (double)a[n -1]-0.0000000000);
    for (int i = 0; i < n -1 ; i++) {
        ans = max ( ans , ( a[i + 1] - a[i] )/2);
    }
    cout << setprecision(10)<<ans;
    return 0;
}