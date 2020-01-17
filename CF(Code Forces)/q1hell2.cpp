#include<bits/stdc++.h>
#define ll long long int
#define in(a, n) ll a[n+1]; for(ll i = 0; i < n; i++) cin >> a[i];
using namespace std;


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    ll n , k;
    cin >> n >> k;
    char s[n+1][k+1];
    unordered_map<string, ll>mp;
    for(ll i = 0; i < n; i++) {
        string a;
        cin >> a;
        mp[a] = 1;
        for(ll j = 0; j < k; j++) {
            s[i][j] = a[j];
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n - 1; i++) {
        for(ll j = i+1; j < n; j++) {
            //for(ll z = j+1; z < n; z++) {
                ll l;
                ll flag = 0;
                string temp = "";
                for( l = 0 ; l < k; l++) {
                    if(s[i][l] == s[j][l]) {
                        temp += s[i][l];
                    }
                    else {
                        if(s[i][l] == 'S' && s[j][l] == 'E') {
                            temp += 'T';
                        }
                        else if(s[i][l] == 'E' && s[j][l] == 'S') {
                            temp += 'T';
                        }
                        else if(s[i][l] == 'S' && s[j][l] == 'T'){
                            temp += 'E';
                        }
                        else if(s[i][l] == 'T' && s[j][l] == 'S') {
                            temp += 'E';
                        }
                        else if(s[i][l] == 'E' && s[j][l] == 'T') {
                            temp += 'S';
                        }
                        else if(s[i][l] == 'T' && s[j][l] == 'E') {
                            temp += 'S';
                        }
                    }
                }
                if(mp.find(temp) != mp.end()) {
                    ans++;
                }
            //}
        }
    }
    cout << ans/3 ;
}