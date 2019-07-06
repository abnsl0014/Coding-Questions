#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=0;i<n;++i)
#define in(a,n) ll a[n+1];for(ll i=0;i<n;i++)cin>>a[i];
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
    ll n, m = 0, x= 0 , ans = 0;
    cin >> n;
    in (a, n)
    ll arr[ n + 1 ];
    //vector<ll>arr;
    for (ll i = 0; i < n; i++) {
        arr[ i ] = a[ i ];
    }
    sort ( arr, arr + n);
    //reverse (arr.begin() ,arr.end());
    
    //reverse(arr.begin(),arr.end());

    for (ll i = 0; i < n; i++) {
        if (a[i]!=arr[i]) {
            m = i;
            break; 
        }
    }

    for (ll i = n-1; i>=0 ;i--) {
        if(a[i]!=arr[i]) {
            x = i;
            break;
        }
    }
    reverse(a+m,a+x+1);
    for( ll i = m; i <= x; i++) {
      //  cout << arr[i] <<" "<<a[i]<<endl;
        if(arr[i]!=a[i]) {
            cout <<"no" <<endl;
            return 0;
        }
    }
    
        cout << "yes" << endl;
        cout << m + 1 <<" " << x + 1;
    
    return 0;
}