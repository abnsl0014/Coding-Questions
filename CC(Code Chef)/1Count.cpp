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
    ll n, cnt = 0, x,i = 0,ans = INT_MIN, l = 0;
    cin >> n >> x;
    ll sz = 0;
    in(a,n)
    while(i < n) {
        while(x > 0 && i < n) {
            if(a[i] == 0) {
                cnt++;
                x--;
                i++;
            }
            else {
                cnt++;
                i++;
            }
        }
        while(a[i] != 0 && i < n) {
            cnt++;
            i++;
        }
        ans = max(ans, cnt - l + 1);
        while(a[l] != 0 && l < n) {
            l++;
        }
        x++;
    }
    cout << ans;
    return 0;
}