#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    for(ll i = 1; i <= a; i++) {
        for(ll j = 1; j <= b; j++) {
            string g ="";
            g += (i + '0');
            g += (j + '0');
           // cout << g << endl;
            if((i + j + i*j) == stoll(g)) {
                cnt++;
            }
        }
    }
    cout << cnt;
}