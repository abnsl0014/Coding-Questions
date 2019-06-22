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
    ll n,m,x,ans;
    string s1;
    cin>>s1;
    ll dp[100001] ;
    dp[0]=1;
    //unordered_map<char,ll>mp;
    ll mp[26];
    for(ll i=0;i<26;i++){
        mp[i]=-1;
    }
    n=s1.length();
    for(ll i=1;i<=s1.length();i++){
        dp[i]=dp[i-1]*2;
        if(mp[s1[i-1]-'A']!=-1){
            dp[i]-=mp[s1[i-1]-'A'];
        }
        mp[s1[i-1]-'A']=i-1;
    }
    print(dp,n)
    cout<<dp[n-1]<<endl;
}
return 0;
}