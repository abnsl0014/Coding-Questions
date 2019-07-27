#include<bits/stdc++.h>
using namespace std;
void out(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n, k, y;
    cin >> n >> k;
    int *arr = new int[n+1];
    map<int , int>brr;
    for(int i = 0; i < n; i++) {
        cin >> y;
        arr[i] = y;
        brr[y]=i;
    }
    auto it = brr.end();
    it--;
    for(int i = 0; i < n; i++) {
        if(arr[i] != it->first) {
            int z = arr[i];
            swap(arr[i], arr[it -> second]);
            swap(brr[z], brr[it -> first]);
            k--;
            if(k == 0) break;
        }
        it--;
    }
    out(arr,n);
    
}