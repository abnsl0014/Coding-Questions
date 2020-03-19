#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[27][27];
void solve() {
    string s;
    unordered_map<char, ll>mp;
    cin >> s;
    for(ll i = 0; i < s.length(); i++) {
        for(char j = 'a'; j <= 'z'; j++) {
            dp[s[i] - 'a'][j - 'a'] += mp[j];
        }
        mp[s[i]]++;
    }
    ll ans = INT_MIN;
    for(auto i : mp) {
        ans = max(ans, i.second);
    }
    for(ll i = 0; i <= 26; i++) {
        for(ll j = 0; j <= 26; j++) {
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << "\n";
}

int main() {
    ll t = 1;
    while(t--) {
        solve();
    }
}