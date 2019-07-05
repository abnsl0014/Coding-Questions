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
    ll t, n, m, x, ans1, ans2;
    cin >> n >> m;
    if(n <= m) {
        cout << "0" <<" " <<"0";
        return 0;
    }
    x = m - 1;
    ll d;
    ans2= (n - x)*(n - x - 1);
    ans2 /= 2;
    if (n % m == 0) {
        x = n / m;
        ans1 = (x)*(x - 1)*(m);
        ans1 /= 2;
    } 
    else {
        x = n / m;
        t = n % m;
        ans1 = (x)*(x - 1)*(m-t);
        ans1 /= 2;
        x = (n / m) + 1;  
        d = (x)*(x - 1)*t;
        d /= 2;
        ans1 += d;
    }
    
    cout << ans1 <<" "<< ans2;
    return 0;
}