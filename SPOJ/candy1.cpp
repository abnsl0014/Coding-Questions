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
    ll x, y, z;
    while(cin>>x&& x!=-1) {
      ll arr[x+1];
      ll sum = 0;
      for(ll i=0;i<x;i++) {
          cin>>arr[i];
          sum+=arr[i];
      }
      if(sum%x) cout<<-1<<endl;
      else {
          ll ans = 0;
          for(ll i=0;i<x;i++) {
              if(arr[i] > sum/x) ans+=(arr[i] - sum/x);
          }
          cout<< ans<<endl;
      }
    }
       
}