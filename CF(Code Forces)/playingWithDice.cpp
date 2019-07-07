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
    ll n, m, x = 0, g = 0, ans = 0;
    cin >> n >> m;
    if(abs(1-n) > abs(1-m)) x++;
    else if(abs(1-n) == abs(1-m)) g++;
    else ans++;
    if(abs(2-n) > abs(2-m)) x++;
     else if(abs(2-n) == abs(2-m)) g++;
    else ans++;
    if(abs(3-n) > abs(3-m)) x++;
     else if(abs(3-n) == abs(3-m)) g++;
    else ans++;
    if(abs(4-n) > abs(4-m)) x++;
     else if(abs(4-n) == abs(4-m)) g++;
    else ans++;
    if(abs(5-n) > abs(5-m)) x++;
     else if(abs(5-n) == abs(5-m)) g++;
    else ans++;
    if(abs(6-n) > abs(6-m)) x++;
     else if(abs(6-n) == abs(6-m)) g++;
    else ans++;
    
    cout << ans << " "<<g<<" "<<x;
    return 0;
}