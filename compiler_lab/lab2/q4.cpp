#include<bits/stdc++.h>
using namespace std;


bool isPossible(string &s) {
    int i = 0;
    int state = 0;
    while(s[i] != '\0') {
        if(state == 0) {
            if(s[i] == 'a') {
                state = 1;
            }
            else {
                state = 0;
            }
        }
        else if(state == 1) {
            if(s[i] == 'a') {
                state = 2;
            }
            else if(s[i] == 'b') {
                state = 1;
            }
        }
         else if(state == 2) {
            if(s[i] == 'a') {
                state = 3;
            }
            else if(s[i] == 'b'){
                state = 2;
            }
        }
         else if(state == 3) {
            if(s[i] == 'a') {
                state = 1;
            }
            else {
                state = 3;
            }
        }
        i++;
    }
    if(state == 3) return true;
    else return false;
}
 
int main() {
    string s;
    cin >> s;
    (isPossible(s))? cout << "Yes\n": cout <<"No\n";
}