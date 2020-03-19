#include<bits/stdc++.h>
using namespace std;
void perm(string s, string asf) {
    if(s.length() == 0) {
        cout << asf <<" ";
        return;
    }
    
    for(int i = 0; i < s.length(); i++) {
        char curr = s[i];
        string s1 = s.substr(0, i);
        string s2 = s.substr(i + 1);
        perm(s1 + s2, asf + curr);
    }
    
}
int main() {
    string s = "abc";
    perm(s ,"");
}
