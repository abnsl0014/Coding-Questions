#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &V, int B) {
}
int main() {
    int n, a, b;
    vector<int>v;
    cin >> n >> b;
    for(int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    cout<<searchInsert(v, b);
}