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
    ll t;
    cin>>t;
    while(t--) {
        ll n,m1,x,ans=0;
        unordered_map<char,vector< pair<int,int> > >m;
        cin>>n>>m1;
        char a[n+1][m1+1];
        for(ll i=0;i<n;i++) {
            for(ll j=0;j<m1;j++) {
                cin>>a[i][j];
                if(a[i][j]=='U') m['U'].pb(mp(i,j));
                if(a[i][j]=='D') m['D'].pb(mp(i,j));
                if(a[i][j]=='L') m['L'].pb(mp(i,j));
                if(a[i][j]=='R') m['R'].pb(mp(i,j));
            }
        }
        for(auto u:m['U']) {
            for(auto l:m['L']) {
                if( (u.ff > l.ff) && (l.ss > u.ss) && (abs(l.ff- u.ff)==abs(l.ss- u.ss)) && a[l.ff][u.ss]!='#') {

                    ll ul=0;
                    for(ll i=l.ss;i>u.ss;i--) {
                        if(a[l.ff][i]=='#') ul=-1;
                    }
                    for(ll i=u.ff;i>l.ff;i--) {
                        if(a[i][u.ss]=='#') ul=-1;
                    }
                    if(ul==0) ans++;
                }
            }
        }
        //cout<<ans<<" .1"<<endl;

         for(auto u:m['U']) {
            for(auto r:m['R']) {
                if( (u.ff > r.ff) && (r.ss < u.ss) && (abs(r.ff- u.ff)==abs(r.ss- u.ss)) && a[r.ff][u.ss]!='#') {
                    ll ul=0;
                    for(ll i=r.ss;i<u.ss;i++) {
                        if(a[r.ff][i]=='#') ul=-1;
                    }
                    for(ll i=u.ff;i>r.ff;i--) {
                        if(a[i][u.ss]=='#') ul=-1;
                    }
                    if(ul==0) ans++;
                }
            }
        }
        //cout<<ans<<".2"<<endl;
         for(auto d:m['D']) {
            for(auto r:m['R']) {
                if( (d.ff < r.ff) && (r.ss < d.ss) && (abs(r.ff- d.ff)==abs(r.ss- d.ss)) && a[r.ff][d.ss]!='#') {
                  ll ul=0;
                    for(ll i=r.ss+1;i<d.ss;i++) {
                        if(a[r.ff][i]=='#') ul=-1;
                    }
                    for(ll i=d.ff+1;i<r.ff;i++) {
                        if(a[i][d.ss]=='#') ul=-1;
                    }
                    if(ul==0) ans++;
                }
            }
        }
        //cout<<ans<<".3"<<endl;
         for(auto d:m['D']) {
            for(auto l:m['L']) {
                if( (d.ff < l.ff) && (l.ss > d.ss) && (abs(l.ff- d.ff)==abs(l.ss- d.ss)) && a[l.ff][d.ss]!='#') {
                    ll ul=0;
                    for(ll i=l.ss;i>d.ss;i--) {
                        if(a[l.ff][i]=='#') ul=-1;
                    }
                    for(ll i=d.ff;i<l.ff;i++) {
                        if(a[i][d.ss]=='#') ul=-1;
                    }
                    if(ul==0) ans++;
                }
            }
        }
        //cout<<ans<<".4"<<endl;
          for(auto u:m['U']) {
            for(auto d:m['D']) {
                if( (d.ff < u.ff) && (d.ss == u.ss) && (abs(u.ff- d.ff)%2==0) ) {
                    ll ck=0;
                    for(ll i=d.ff+1;i<u.ff;i++) {
                        if(a[i][d.ss]=='#') {
                            ck=-1;
                        }
                    }
                    if(ck==0) ans++;
                }
            }
        }
         //cout<<ans<<".5"<<endl;
        for(auto l:m['L']) {
            for(auto r:m['R']) {
                if( (l.ff == r.ff) && (l.ss > r.ss) && (abs(l.ss- r.ss)%2==0)) {
                      ll ck=0;
                    for(ll i=r.ss+1;i<l.ss;i++) {
                        if(a[l.ff][i]=='#'){
                            ck=-1;
                        }
                    }
                    if(ck==0) ans++;
                }
            }
        }

        cout<<ans<<endl;
    }
return 0;
}