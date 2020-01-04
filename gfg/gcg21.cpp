#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll unsigned long long int
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
    SPEED
    ll t;
    cin>>t;
        while(t--) {
            ll i,j,m,n,k,c,x=0,ans=0;
            cin >> n >> k;
            multiset <ll, greater <ll> > s;
            for(ll i=0;i<n;i++) {
                cin >> c;
                x += c;
                s.insert(c);
            }
            if(k == 0 || x == 0) {
                cout << "0\n";
                continue;
            }
            while(s.size() != 0) {
                if(k > 0) {
                    k--;
                    ans += *s.begin();
                    ll o = *s.begin();
                    o--;
                    if(o <= 0) {
                        s.erase(*s.begin());
                    }
                    else {
                        s.erase(*s.begin());
                        s.insert(o);
                    }
                }
                else {
                    break;
                }
            }
            cout << ans << "\n";

        }
}