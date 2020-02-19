#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll getLowerIdx(ll* arr, ll n, ll x, bool lowerIdx) {
    ll begin = 0, end = n - 1, mid, ans = -1;
    while ( begin <= end) {
         mid = end + (begin - end)/2;
         if(arr[mid] == x) {
             ans = mid;
             if(lowerIdx) {
                 end = mid - 1;
             }
             else {
                 begin = mid + 1;
             }
         }
         else if(x > arr[mid]) {
             begin = mid + 1;
         }   
         else {
             end = mid - 1;
         } 
    }
    return ans;
}

int main() {
    //We can achieve order of log(n) complexity using Binary Search Technique.
    ll n, x;
    cin >> n;
    ll* arr = new ll[n+1];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    ll lowerIndex = getLowerIdx(arr, n, x, true);
    ll higherIndex = getLowerIdx(arr, n, x, false);
    if(lowerIndex == -1) {
        cout << "-1\n";
    }
    else {
        cout << (higherIndex - lowerIndex + 1);
    }
}