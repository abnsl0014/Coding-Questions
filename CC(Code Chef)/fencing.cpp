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
    cin>>t;
    while(t--){
    	ll i,j,k,n,ma,c,x,ans;
        cin>>n>>ma>>k;
        ans=4*k;
        ll l,r;
        map< pair<ll,ll>,int> m;
        map< pair<ll,ll>,int>::iterator it;
        while(k--){
        	cin>>l>>r;
        	 m.insert( pair< pair<ll,ll>,int>(mp(l,r),1) );
        }
        for(it=m.begin();it!=m.end();++it){
        	if(m.count(mp(it->first.first+1,it->first.second))){
        		ans-=1;
        	}
        	if(m.count(mp(it->first.first-1, it->first.second))){
        		ans-=1;
        	}
        	if(m.count(mp(it->first.first,it->first.second+1))){
        		ans-=1;
        	}
        	if(m.count(mp(it->first.first,it->first.second-1))){
        		ans-=1;
        	}
        }

        cout<<ans;br;

    }
    return 0;
}