#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<string>v;
    for(int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    while(q--) {
        string s;
        getline(cin, s);
        int i = s.length() - 1;
        while(s[i] != '~') {
            i--;
        }
        string to_find = "";
        for(int j = i + 1; j < s.length(); j++) {
            to_find += s[j];
        }
        string curr_str =  v[(s[i-1] - '0')-1];
        size_t found =curr_str.find(to_find);
        if (found!=std::string::npos) {
            for(int k = found + to_find.length() + 2; curr_str[k] != '"'; k++) {
                cout << curr_str[k];
            }
            cout << "\n";
        }
        else {
            cout <<"Not Found!\n";
        }
    }
    
}