#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &A, int B) {
    int high = A.size() - 1;
    int low = 0;
    int mid;
    while(low < high) {
        mid = low + (high - low)/2;
        if(A[mid]==B) {
            return mid;
        }
        else if(A[mid] > B) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(B > A[low])
        return low + 1;
    else 
        return low;
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