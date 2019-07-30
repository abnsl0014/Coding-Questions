#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll x, sum = 0, m = 1;
        cin >> x;
        while(sum < x*x) {
            sum+=m*m;
            m++;
        }
        cout << m << "\n";
    }
}