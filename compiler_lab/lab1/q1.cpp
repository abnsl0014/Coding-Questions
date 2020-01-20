#include<bits/stdc++.h>
using namespace std;

 unordered_map<char,int>mp;
bool SmallStackpriority(char a, char b) {
    //unordered_map<char,int>mp;
    mp['('] = 0;
    mp[')'] = 0;
    mp['^'] = 5;
    mp['*'] = 4;
    mp['/'] = 4;
    mp['+'] = 3;
    mp['-'] = 3;
    if(mp[a] > mp[b]) return true;
    return false;
}
int main()
 {
     int t;
     cin >> t;
     while(t--) {
         string s;
         stack<char>st;
         cin >> s;
         if(SmallStackpriority('^', '*'))
         
         for(int i = 0; i < s.length(); i++) {
             if(mp.count(s[i]) == 0) {
                 cout << s[i];
             }
             else if(s[i] == '(') {
                 st.push(s[i]);
             }
             else if(s[i] == ')') {
                 while(st.top() != '(') {
                     cout << st.top();
                     st.pop();
                 }
                 st.pop();
             }
             else {
                 while( (!st.empty())  && (st.top() != '(') && (!SmallStackpriority(s[i], st.top()))) {
                    cout << st.top();
                    st.pop();
                 }
                 st.push(s[i]);
             }
         }
         while(!st.empty()){
             cout << st.top();
             st.pop();
         }
          cout << '\n';
     }
    
	//code
	return 0;
}