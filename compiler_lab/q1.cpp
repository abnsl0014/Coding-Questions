#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool match(string s1, string s2, ll i, ll j) {
    if(i == s1.length() && j == s2.length()) {
       // cout << "i and j are now " << i << j <<"\n";
        return true;
    }
    else if(j == s2.length()) {
        //cout << "j is now "<< j << "\n";
        for(ll k = i; k < s1.length(); k++) {
            if(s1[k] != '*') {
                return false;
            }
        }
        return true;
    }
    else if(i == s1.length()) {
        //cout << "i1 is now "<< i << " \n";
        return false;
    }
    
    if(s1[i] == '*') {
        //cout <<"i and j are now" << i <<"and "<< j <<" \n";
        return match(s1, s2, i, j+1) || match(s1, s2, i+1, j+1);
    }
    else if(s1[i] == '?') {
        return match(s1, s2, i+1, j+1);
    }
    else if(s1[i] == s2[j]){
        //cout << "i2 is now "<< i <<"\n";
        return match(s1, s2, i+1, j+1);
    }
    else {
        //cout << "Sorry\n";
        return false;
    }
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    (match(s1, s2, 0, 0))? cout << "Yes\n" : cout << "No\n"; 
}
