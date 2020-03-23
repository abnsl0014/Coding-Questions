#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        ll i = 0; 
        ll j = s.length() - 1;
        while(i < j) {
            if(s[i] != s[j]) {
                j--;
            }
            i++;
            j--;
        }

    }
}