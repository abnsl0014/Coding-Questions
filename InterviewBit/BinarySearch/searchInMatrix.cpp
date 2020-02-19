#include<bits/stdc++.h>
using namespace std;

int searchInMatrix(vector<vector<int>>& A, int B) {
    int r = A.size();
    int c = A[0].size();
    int t = 0;
    for(int i = 0; i < A.size(); i++) {
        if(binary_search(A[i].begin(), A[i].end(), B)) {
            t = 1;
        }
    }
    if(t) return 1;
    else return 0;
}
int main() {
    int r, c, B;
    cin >> r >> c;
    vector<vector<int>> A;
    for(int i = 0; i < r; i++) {
        vector<int> vec;
        for(int j = 0; j < c; j++) {
            int k; cin >> k;
            vec.push_back(k);
        }
        A.push_back(vec);
    }
    cin >> B;
    cout << searchInMatrix(A, B);
}