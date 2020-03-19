#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<string , ll> mp, mp2;
    string temp ="";
    ll len = 0;
    for(ll i = 0; i < s.length(); i++) {
        len++;
        temp += s[i];
        mp[temp]++;
        mp2[temp] = len; 
    }
    len = 0;
    temp = "";
    for(ll i = s.length()-1; i >=0; i--) {
        len++;
        temp += s[i];
        mp[temp]++;
        mp2[temp] = len; 
    }
    ll mx = INT_MIN;
    string fans;
    for(auto i : mp) {
        if(i.second >= 4) {
            if(mp2[i.first] > mx) {
                mx = mp2[i.first];
                fans = i.first;
            }
        }
    }
    for(auto i : mp) {
        cout << i.first <<"--> "<<i.second << "\n";
    }
    if(mx == INT_MIN) {
        cout << "Just a lengend\n";
    }
    else {
        cout << fans << "\n";
    }
}