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
    ll n,m,x,ans;
    unordered_map<int,int >mp1,mp2;
    vector<int>v;
    cin>>n;
    in(a,n)
    in(b,n)
   for (int i = 0; i < n; i++) {
       mp1[a[i]]++;
       mp2[b[i]]++;
   }
    for (auto i = mp1.begin(); i != mp1.end(); i++) {
            if(mp2[i->ff] > i->ss){
                for(int j = 0; j < i->ss; j++) {
                    v.pb(i->ff);
                }
            }
            else {
                for(int j = 0; j < mp2[i->ff]; j++) {
                    v.pb(i->ff);
                }
            }
    }
   cout<<"[";
   for(int i=0; i< v.size(); i++) {
       cout<<v[i];
       if(i != v.size() - 1) cout<<", ";
   }
    cout << "]";
    return 0;
}