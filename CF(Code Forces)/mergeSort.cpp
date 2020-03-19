#include<bits/stdc++.h>
using namespace std;

int merge(int s, int mid, int  e, int* a) {
    int frr[100000];
    int i = s;
    int j = mid + 1;
    int k = 0;
    int cost = 0;
    while(i <= mid && j <= e) {
        if(a[i] < a[j]) {
            frr[k++] = a[i++];
            cost += (e - j  + 1);
        }
        else {
            frr[k++] = a[j++];
        }
    }
    while(i <= mid) {
        frr[k++] = a[i++];
    }
    while(j <= e) {
        frr[k++] = a[j++];
    }
    k = 0;
    for(int i = s; i <= e; i++) {
        a[i] = frr[k++];
    }
    return cost;
}

int mergeSort(int s, int e, int* arr) {
    if(s >= e) {
        return 0;
    }
    int mid = (s + e)/2;
    int c1 = mergeSort(s, mid, arr);
    int c2 = mergeSort(mid + 1, e, arr);
    int c3 = merge(s, mid, e, arr);
    return c1 + c2 + c3;
}

int main() {
    int n;
    cin >> n;
    int arr[n+2];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        int g;
        cin >> g;
        arr[i] += g;
    }
    cout << mergeSort(0, n - 1, arr);
}