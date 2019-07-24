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

bool issorted(int x, ll*a) {
    for (int i = 0; i < x; i++) {
        if(a[i+1] < a[i]) {
            return false;
        }
    }
      return true;
}
bool issorted2(int x,ll* a,ll n) {
    for (int i = x; i < n - 1; i++) {
        if(a[i+1] > a[i]) {
            return false;
        }
    }
    return true; 
}
int main() {
    SPEED
    ll n,m,x,ans = INT_MIN;
    cin>>n;
    in(a,n)
    fr{ m=ans;
        ans= max(ans,a[i]);
        if(ans!=m){x = i;}
    }
    if(issorted(x,a) && issorted2(x,a,n)) {
        cout <<"yes"<<endl;
    }
    else {
        cout <<"no"<<endl;
    }
    return 0;
}