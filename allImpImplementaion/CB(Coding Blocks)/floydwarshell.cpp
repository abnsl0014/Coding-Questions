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
bool warshall(ll n,ll g[51][51]) {
    ll dist[n+1][n+1];
    for(ll i = 0; i < n; i++) {
        for(ll J=0; J < n; J++) {
            dist[i][J] = g[i][J];
        }
    }
    for(ll k =0;k<n;k++) {
        for(ll i=0;i<n;i++) {
            for(ll j=0;j<n;j++) {
                if (dist[i][j]>dist[i][k] + dist[k][j] ) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
            }
        }
    }
    int r=1;
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            if(g[i][j]!=1000000 && dist[i][j]!=g[i][j]) {
                r=0;
            }
        }
    }
    //  for(ll i=0;i<n;i++) {
    //         for(ll j=0;j<n;j++){
    //             if(dist[i][j]==1000000) cout<<"i ";
    //             else cout<<dist[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
        if(r==0) return false;
        else return true;
}
int main(){
   // SPEED
    int t;cin>>t;
    for (int z=1;z<=t;z++) {
        ll n,m,x,ans,a,b,c;
        cin>>n>>m;
        ll g[51][51];
        for(ll i=0;i<n;i++) {
            for(ll j=0;j<n;j++) {
                //if(i==j) g[i][j]=0;
                g[i][j]=1000000;
            }
        }
        while (m--) {
            cin>>a>>b>>c;
               g[a-1][b-1]=c;
               g[b-1][a-1]=c;
        }
        // for(ll i=0;i<n;i++){
        //     for(ll j=0;j<n;j++){
        //         if(g[i][j]==1000000) cout<<"i ";
        //         else cout<<g[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        cout<<"Case #"<<z<<": ";
        if(warshall(n,g)) {
            cout<<(n*(n-1))/2<<endl;
            for(ll i=0;i<n;i++) {
                for(ll j=i+1;j<n;j++) {
                    cout<<i+1<<" "<<j+1<<" "<<g[i][j]<<endl;
                }
            }
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}