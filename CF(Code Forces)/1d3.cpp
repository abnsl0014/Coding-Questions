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
    SPEED
    ll t,i,j,k=0,n,m,c,x,y,a,b,ans;
    cin >> t;
    while(t--) {
        cin >> x >> y >> a >> b;
        ll cnt = 0;
        if( (y-x) % (a+b) == 0) {
            ll g = (y-x)/(a+b);
            cout << g << "\n";
        }
        else {
            cout << "-1\n";
        }
        // double ans = (double)(y - x)/(a + b);
        // ll ans2 = (y - x)/(a + b);
        // if((x + a) > (y - b)) {
        //     cout << -1 << "\n";
        //     continue;
        // }
        // if( (x + ans2*a <= (ll)1000000000) && (x + ans2*a >= 1) && (y - ans2*b <= (ll)1000000000) && (y- ans2*b >= 1) && (floor(ans) == ceil(ans)) ) {
        //     cout << ans << "\n";
        // }
        // else cout << "-1\n";

    }
}