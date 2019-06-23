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
int main(){
SPEED
ll t,z;
priority_queue<ll,vector<ll>,greater<ll> >pq;
vector<ll>v;
cin>>t>>z;
while(t--){
    ll n,m,k,ans;
    //cin>>n>>x;
    cin>>k;
    if(k==1) {
        cin>>n>>m;
        pq.push((n*n)+(m*m));
    }
    else {
        for(int i=0;i<z-1;i++){
            v.pb(pq.top());
            pq.pop();
        }
        cout<<pq.top()<<endl;
        for(int i=0;i<z-1;i++){
            pq.push(v[i]);
        }
        v.clear();
    }
}
return 0;
}