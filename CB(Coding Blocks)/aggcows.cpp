#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=1;i<n;++i)
#define in(a,n) ll *a=new ll[n];for(ll i=0;i<n;i++)cin>>a[i];
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
    ll t,i,j,k,n,m,c,x,ans;
    cin>>t;
    while(t--){
        cin>>n>>c;
        in(a,n);
        sort(a,a+n);
        ll s=0,mid;
        ll e=a[n-1]-a[0];
        ll mx=-1;
        while(s<e){
        	 mid=(s+e)/2;
        	ll st=a[0],cw=1,r=0;
        	fr{
        		if(a[i]-st>=mid){
        			cw++;
        			st=a[i];
        		}
        		if(cw==c){
        			if(mid>mx) mx=mid;
        			s=mid+1;
        			r=1;
        			continue;
        		}

        	}
        	if(!r) e=mid;
        }

        cout<<mx;br

    }
    return 0;
}