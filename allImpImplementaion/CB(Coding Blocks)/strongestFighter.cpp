#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    stack<int>s;
    int x = 0;
    while(s.size() < 3) {
        s.push(a[x]);
        x++;
    }
    
    
}