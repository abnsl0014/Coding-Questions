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

bool check( vector< pair <ll ,ll> >v ,ll a[][4]) {
    
     for (int j =0 ;j <3;j++) {
                if (a[v[0].ss][j] > a[v[1].ss][j] || a[v[1].ss][j] > a[v[2].ss][j]) {
                   return false;
                }
     }
     return true;
}
int main() {
    SPEED
    ll t;
    cin >> t;
    while( t-- ) {
         ll n, m, x, ans = -1;
         vector< pair <ll ,ll> >v;
         ll a[4][4];
        for (int i = 0; i < 3; i++) {
            ll sum = 0;
             for (int j = 0; j < 3; j++) {
                 cin >>a[i][j];
                 sum+=a[i][j];
             } 
             v.pb(mp(sum,i));
        }
        //printv(v)
        
        if(v[0].ff==v[1].ff || v[0].ff == v[2].ff || v[1].ff == v[2].ff ) {
              cout<<"no"<<endl;
        }
        else {
            sort(v.begin(),v.end());
            if (check(v,a)) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}