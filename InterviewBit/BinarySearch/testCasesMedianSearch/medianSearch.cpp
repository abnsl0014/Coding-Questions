#include<bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int> >A) {
    int mina = INT_MAX, maxa = INT_MIN;
    int r = A.size();
    int c = A[0].size();
    int elements = (r*c + 1) / 2;
    for(int i = 0; i < r; i++) {
        mina = min( mina, A[i][0]);
        maxa = max( maxa, A[i][c-1]);
    }
    int mid;
    while(mina < maxa) {
        mid = mina + (maxa - mina)/2;
        int curr_count = 0;
        for(int i = 0; i < r; i++) {
            curr_count += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        }
        if(curr_count >= elements) {
            maxa = mid;
        }
        else {
            mina = mid+1;
        }
    }
    return mina;
}
int main() {
    int r, c;
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
    cout << findMedian(A);
}