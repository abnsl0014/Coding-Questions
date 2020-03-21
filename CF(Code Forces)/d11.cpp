#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        unordered_map<string, pair<ll, ll> > mp;
        string temp = "";

        for(int i = 0; i < s.length() - 1; i++) {
            for(int j = i + 1; j < s.length(); j++) {
                // string chk = s.substr(i, j + 1);
                // reverse(chk.begin(), chk.end());
                // if(mp.count(chk) != 0) {
                //     if(2*chk.length() > temp.length()) {
                //         temp = s.substr(i, j + 1);
                //         temp += chk; 
                //     }
                // }
                // if(mp.count(chk.substr(1)) != 0) {
                //     if((2*chk.length() - 1)> temp.length()) {
                //         temp = s.substr(i, j + 1);
                //         temp += chk.substr(1); 
                //     }
                // }
                mp[s.substr(i, j + 1)].insert({i, j});
            }
        }
        ll fi = -1;
        ll fj = -1;
        for(auto j : mp) {
            string temp = j.first;
            mp.erase(temp);
            reverse(temp.begin(), temp.end());
            if(mp.count(temp) != 0 && abs(fj - fi) < (abs(mp[temp].first - mp[temp].second))) {
                fi = mp[temp].first;
                fj = mp[temp].second;
            }
        }
        string r = "";
        for(int i = fi; i <= fj; i++) {
            r += s[i];
        }
        ll cnt = fj - fi;
        ll st = fi;
        ll ok = 1;
        for(int i = fi - 1;(i >=0 && (cnt) ); i--) {
            if(s[i] != st) {
                ok = 0;
                break;
            }
            st++;
            cnt--;
        }
        cnt = fj - fi;
        st = fi;
        ll ok2 = 1;
        for(int i = fj + 1; (i < s.length() && (cnt)); i++) {
            if(s[i] != st) {
                ok2 = 0; 
            }
            st++;
            cnt--;
        }
        if(ok) {


        }
        else if(ok2) {

        }
        else {
            int i = fi;
            while(i <= fj) {
                cout << s[i];
            }
            
        }
    }
}