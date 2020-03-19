#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        unordered_map<string, ll> mp;
        string temp = "";

        for(int i = 0; i < s.length() - 1; i++) {
            for(int j = i + 1; j < s.length(); j++) {
                string chk = s.substr(i, j + 1);
                reverse(chk.begin(), chk.end());
                if(mp.count(chk) != 0) {
                    if(2*chk.length() > temp.length()) {
                        temp = s.substr(i, j + 1);
                        temp += chk; 
                    }
                }
                if(mp.count(chk.substr(1)) != 0) {
                    if((2*chk.length() - 1)> temp.length()) {
                        temp = s.substr(i, j + 1);
                        temp += chk.substr(1); 
                    }
                }
                mp[s.substr(i, j + 1)] = 1;
            }
        }
        
    }
}