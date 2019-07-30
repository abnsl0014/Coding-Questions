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
ll t;
cin>>t;
    while(t--){
    ll n,m,x,ans,sum=0;
    map<ll, pair<ll,ll> >m;
    unordered_map<ll,ll>um;
    vector<ll>v;
    cin>>n;
    in(a,n)
        for(ll i=0;i<n -1;i++) {
            if(a[i+1] < a[i]) {
                m.insert(mp(a[i] - a[i+1],mp(i,i+1));
            }
        }
        int j=0;
        for(auto i = um.begin();i!=um.end();i++) {
            um[j] = 1;
            j++;
        }
        //sort(v.begin(),v.end());
        for(auto it = m.begin(); it != m.end(); it++) {
            if(um[(it->second).ff]==1 && um[(it->second).ss]==1)
            swap(a[(it->second).ff],a[(it->second).ss]);
            um[(it->second).ff] = 0;
            um[(it->second).ss] = 0;
        }
        for(ll i=0;i<n;i++) {
            sum += a[i]*(i+1);
        }
        cout<<sum<<endl;
    }
return 0;
}