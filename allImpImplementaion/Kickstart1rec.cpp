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

ll z = INT_MAX;

void getans(ll* a, ll n, ll k, ll x, ll ans, ll i) {
    if(i == n) return;
    if(k<=x) {
        z = min(z, ans);
        return;
    }
    if(i==0) {
        ll istemal = a[i];
        if(a[i]!=a[i+1]){
            a[i] = a[i+1];
            
             getans(a, n, k-1, x, ans+1, i+1);
        }
        a[i] = istemal;
        getans(a, n, k, x, ans, i+1);
    }
    else if(i==n-1) {
        ll istemal = a[i];
        if(a[i]!=a[i-1]) {
            ll istemal = a[i];
            getans(a, n, k-1, x, ans+1, i+1);
        }
        a[i] = istemal;
        getans(a, n, k, x, ans, i+1);
     }
    else {
        ll istemal = a[i];
        if(a[i] != a[i-1]) {
            a[i] = a[i-1];
            if(a[i+1] == istemal) {
                 getans(a, n, k, x, ans+1, i+1);
            }
            else if (a[i-1]==a[i+1])
                getans(a, n, k-2, x, ans+1, i+1);
            else {
                 getans(a, n, k-1, x, ans+1, i+1);
            }
        }
        else {
           // if(a[i+1] == istemal) {
                 getans(a, n, k, x, ans, i+1);
            //}
            //else {
              //   getans(a, n, k-1, x, ans, i+1);
            //}
        }
        
        a[i] = istemal;
        
        // if(a[i] != a[i+1]) {
        //     a[i] = a[i+1];
        //     if(a[i-1] == istemal) {
        //          getans(a, n, k, x, ans+1, i+1);
        //     }
        //     else if (a[i-1]==a[i+1])
        //         getans(a, n, k-2, x, ans+1, i+1);
        //     else {
        //          getans(a, n, k-1, x, ans+1, i+1);
        //     }
        // }
        // else {
        //     // if(a[i-1] == istemal) {
        //           getans(a, n, k, x, ans, i+1);
        //     // }
        //     // else {
        //       //  getans(a, n, k-1, x, ans+1, i+1);
        //   //  }
        // }
        a[i] = istemal;
        getans(a, n, k, x, ans , i+1);
    }
    return;
}
int main(){
    SPEED
    ll t, r = 1;
    cin>>t;
    while(t--){
        ll n,m,x,ans=0,k=0;
        ll i=0;
        cin>>n>>x;
        in(a, n)
        for(ll i=1; i<n ;i++) {
            if(a[i] != a[i-1]) k++;
        }
        //cout<<k<<endl;
        z= INT_MAX;
        getans(a, n, k, x, ans, i);
        cout<<"Case #"<<r<<": "<<z<<endl;
        r++;
    }
    return 0;
}