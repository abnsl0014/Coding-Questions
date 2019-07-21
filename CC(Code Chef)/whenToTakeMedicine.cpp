#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        char c;
        int year = 0,month = 0,date = 0,ans = 0;
        string s; cin >> s;
        for(int i = 0; i < 4 ;i++ ) {
            year = (year)*10 + (s[i] - '0');
        }
        for(int i = 5; i <= 6; i++) {
            month =(month)*10 + (s[i] - '0');
        }
        for(int i=8; i <= 9; i++) {
            date = (date)*10 + (s[i] - '0');
        }
        // cout << year << endl;
        // cout <<month <<endl;
        // cout << date <<endl;
        if(year%4 == 0 && year != 1900) {
           if(date % 2 == 0) {
               ans += (30 - date) / 2;
           } 
           else {
               ans+= (29 - date) / 2;
           }
        }
        else if( month == 2) {
             if (date % 2 == 0) {
                ans += ((30 - date) / 2);
                ans += 15; 
            }
            else {
                ans += ((29 - date) / 2);
                ans += 15; 
            }
        }
        else if (month == 4 || month == 6 ||month == 9 ||month == 11) {
            if(date % 2 == 0) {
                ans +=(32 - date)/2;
                ans += 15;
            }
            else {
                ans += (31 - date)/2;
                ans += 15;
            }
        }
        else {
            if(date % 2 == 0) {
                ans += (32 - date)/2;
            }
            else {
                ans += (33 - date)/2;
            }
        }
        cout << ans <<endl;
        }
    }
   
