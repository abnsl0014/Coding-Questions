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

bool isgood(char a[][101] , ll n) {
     for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) {
            ll x, y;
            ll chck = 0;
            x = i - 1;
            y = j - 1;
            ll r = i + 1;
            ll q = j + 1;
            //cout << "a [" << i <<"] [" <<j <<"]"<< endl;
            if (x >= 0 && x < n) {
               if (a[ x ][ j ]=='o')  chck ++;
               
                //cout << chck <<endl;
            }
             if (y >= 0 && y < n) {
                if(a[ i ][ y ]=='o')  chck ++;
               
                //cout << chck <<endl;
            }
             if (r >= 0 && r < n) {
                if(a[ r ][ j ]=='o') chck ++;
                
                //cout << chck <<endl;
            }
             if (q >= 0 && q < n) {
                if(a[ i ][ q ]=='o') chck ++;
                
               // cout << chck <<endl;
            }

            if( chck%2 == 1 ) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    SPEED
    ll n,m,x,ans;
    cin>>n;
    char a[ n + 1][101 ];
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) {
            cin >> a[ i ][ j ];
        }
    }
    isgood(a,n) ? cout << "YES" : cout << "NO";
    cout << endl;
    return 0;
}