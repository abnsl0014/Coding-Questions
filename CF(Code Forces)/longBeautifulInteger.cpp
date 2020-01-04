#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
       string s1, s2;
       stack<char>s, r;
       char arr[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
       cin >> s1;
       cin >> s2;
       for(ll i = 0; i < s1.length(); i++) {
           s.push(s1[i]);
       }
       for(ll i = 0; i < s2.length(); i++) {
           r.push(s2[i]);
       }
       string s3, s4;
       s3 = s4 = "";
       ll cnt = 0;
       while(!s.empty()) {
            char z = s.top();
           if(z != '#') {
                ll need;
                for(ll i = 0; i < 26; i++) {
                    if(arr[i] == z) {
                        need = i;
                        break;
                    }
                }
                need = (need + cnt)%26;
                s3 += arr[need];
                cnt = 0; 
           }
           else {
               cnt++;
           }
       }
        ll cnt = 0;
        while(!r.empty()) {
            char z = r.top();
           if(z != '#') {
                ll need;
                for(ll i = 0; i < 26; i++) {
                    if(arr[i] == z) {
                        need = i;
                        break;
                    }
                }
                need = (need + cnt)%26;
                s4 += arr[need];
                cnt = 0; 
           }
           else {
               cnt++;
           }
       }

       if(s3 == s4) {
           cout << "Yes\n";
       }
       else {
           cout << "No\n";
       }
         
    }


}