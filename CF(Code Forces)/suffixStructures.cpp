#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isSubsequence(string s1, string s2) {
    ll i, j;
    i = j = 0;
    while(i < s1.length() && j < s2.length()) {
        if(s1[i] == s2[j]) {
            j++;
            i++;
        }
        else {
            i++;
        }
    }
    if(j == s2.length()) return true;
    else return false;
}

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if(isSubsequence(s1, s2)) {
        cout << "automaton\n";
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(isSubsequence(s1, s2)) {
        if(s1.length() == s2.length()) {
            cout << "array\n";
        }
        else {
            cout << "both\n";
        }
    }
    else {
        cout << "need tree\n";
    }
}