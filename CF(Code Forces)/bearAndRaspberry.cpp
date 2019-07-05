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
ll n, m, x = 0, ans = INT_MIN;
cin >> n >> m;
in(a,n)
for (int i = 0; i < n - 1; i++) {
    if ( a[i+1] < a[i] && ans < a[i]-a[i+1]) {
        ans=a[i]-a[i+1];
        x=-1;
    }
}
if(x==0 || (ans - m)<0) cout <<"0";
else cout<<ans - m;
cout << endl;
return 0;
}