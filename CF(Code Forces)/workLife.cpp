#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while( t-- ) {
        ll n, k;
        cin >> n >> k;
        ll arr[n + 1];
        ll brr[n + 1];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        for (ll i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                while(brr[i] > brr[i + 1] && k > 0) {
                    brr[i] -= 1;
                    brr[i+1] += 1;
                    k--;
                }
            }
            else if(brr[i] > brr[i+1]) {
                while(arr[i] > 0 && brr[i]>brr[i+1] && k > 0) {
                    arr[i]--;
                   // arr[i+1]++;
                    brr[i]--;
                    brr[i+1]++;
                    k--;
                }
            }
            
        }
        ll ans = INT_MIN;
        for (ll i = 0; i < n; i++) {
           // cout << brr[i]<<" ";
            ans = max( ans, brr[i]);
        }  
        cout << ans <<endl;     
    }
}