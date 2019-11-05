#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll n;
    cin >> n;
    ll a[n+1][4];
    //ll dp[n+1][4];
    ll* dp = new ll[n+1];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    
    for(ll i = 1; i < n; i++ ) {
        for(ll j = 0; j < 3; j++) {
            if(j == 0)
                a[i][j] = a[i][j] + max( a[i-1][j+1] , a[i-1][j+2]);
            else if(j==1)
                a[i][j] = a[i][j] + max( a[i-1][j-1] , a[i-1][j+1]);
            else if(j==2)
                a[i][j] = a[i][j] + max( a[i-1][j-1] , a[i-1][j-2]);  
        }
    }
    cout << max( a[n-1][0] , max( a[n-1][1] , a[n-1][2]) );
}
