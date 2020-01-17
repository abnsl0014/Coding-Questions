#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dice1;
    int dice2;
    unordered_map<int, int>mp;
    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> dice1;
        mp[dice1]++;
        ans = max(ans, dice1*mp[dice1]);
    }
    for(int i = 0; i < n; i++) {
        cin >> dice2;
        mp[dice2]++;
        ans = max(ans, dice2*mp[dice2]);
    }
    cout << ans << endl;
}