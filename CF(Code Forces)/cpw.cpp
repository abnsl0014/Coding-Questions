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
    ll t;
    cin >> t;
    while(t--) {
        ll i,j,k,n,m,c,x,y,b,ans;
        cin >> n >> k;
        if(n%2 == 0 && k%2 == 0) {
            if( k <= sqrt(n)) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else if(n%2 == 1 && k%2 == 1) {
            if( k <= sqrt(n)) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }

        }
        else {
            cout << "NO\n";
        }
    }
}