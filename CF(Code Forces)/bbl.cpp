#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool isPrime(int n) 
{  
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i = 5; i*i <= n; i = i+6) 
        if (n % i == 0 || n % (i+2) == 0) 
           return false; 

    return true; 
} 


int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a[n+1];
        vector<ll>v;
        for(ll i=0;i<n;i++) {
            cin >> a[i];
            if(a[i] > 2) {
                if(isPrime(a[i] - 2)) {
                    v.push_back(a[i]);
                    a[i] = -1;
                }
            }
        }
        ll g = 0;
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++) {
            if(a[i] == -1) {
                a[i] = v[g];
                g++;
            }
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}