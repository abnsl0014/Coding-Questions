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

void printpq(priority_queue<pair<ll,ll> >pq) {
    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
SPEED
ll t;
cin>>t;
while(t--) {
    ll n,m,x,a,ans;
    priority_queue< pair<ll,ll> >pq;
    unordered_map<ll,ll>mp;
    cin>>n>>x;
    while(n--) {
        cin>>a;
        if(mp.find(a)==mp.end()) {
            mp[a]=1;
        }
        else {
            mp[a]++;
        }

        if(pq.size()==x) {
            if(pq.top().first<mp[a]){
                pq.pop();
                pq.push( make_pair(mp[a],a) );
            }                                                  
        }
        else {
             pq.push(make_pair(mp[a],a) );
             printpq(pq);
        }
    }
}
return 0;
}