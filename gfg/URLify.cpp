#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin >> t;
     char ws;
     while(t--) {
         int n;
         ws = cin.get();
         char s[1001];
         cin.getline(s,1000);
         cin >> n;
         int spaces = 0;
         for(int i = 0; i < n; i++) {
             if(s[i] == ' ')
                spaces++;
         }
         int need = n + 2*spaces;
         s[need] = '\0';
         need --;
         for(int i = n-1; i >= 0; i--) {
             if(s[i] == ' ') {
                 s[need] = '0';
                 s[need - 1] = '2';
                 s[need - 2] = '%';
                 need -= 3;
             }
             else {
                 s[need--] = s[i];
             }
         }
         cout << s;
         cout << "\n";
     }
	return 0;
}