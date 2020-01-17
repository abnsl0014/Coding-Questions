#include<bits/stdc++.h>
using namespace std;


bool isPossible(string &s) {
    int i = 0;
    int state = 0;
    while(s[i] != '\0') {
        if(state == 0) {
            if(s[i] == '0') {
                state = 0;
            }
            else {
                state = 1;
            }
        }
        else if(state == 1) {
            if(s[i] == '0') {
                state = 1;
            }
            else {
                state = 0;
            }
        }
        i++;
    }
    if(state) return true;
    else return false;
}
 
int main() {
    string s;
    cin >> s;
    (isPossible(s))? cout << "Yes\n": cout <<"No\n";
}