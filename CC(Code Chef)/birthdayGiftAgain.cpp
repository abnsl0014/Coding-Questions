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
ll t;
cin >> t;
while(t--) {
    ll n = 0, m = 0, x = 1, ans = 0;
    string s; cin >> s;
    ll len = 2;
    ll *a = new ll[s.length() + 1];
    ll *b = new ll[s.length() + 1];
    if(s[0]=='0') {
        b[0] = 1;
        a[0] = 0;
    }
    else {
        a[0] = 1;
        b[0] = 0;
    }
    for(ll i = 1; i < s.length(); i++) {
        a[i] = a[i-1];
        b[i] = b[i-1];
        if(s[i] == '0') b[i]++;
        else a[i]++;
    } 
    while(true) {
            if (b[len-1] = a[len-1]*a[len-1]) ans++;
            n = b[len - 1];
            m = a[len - 1];
           for(ll i = len; i < s.length(); i++) {
            if(s[i-len] == '0') n--;
            if(s[i-len] == '1') m--;
            if(s[i] == '0') n++;
            if(s[i] == '1') m++;
            if(n == m*m) ans++;
        }
        x++;
        len = x + (x*x); 
        if(len > s.length()) break;
        n = 0;
        m = 0;
    }
    cout << ans <<"\n";
}
return 0;
}