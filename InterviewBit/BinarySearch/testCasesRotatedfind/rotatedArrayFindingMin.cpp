#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll rotateFindMin(ll* arr, ll n) {
    int  high = n - 1;
    int low = 0;
    int ans = 0, mid;
    while(low <= high) {
        if(n==1)  return arr[ans];
         mid = low + ((high - low) / 2);
        if( (arr[mid] < arr[(mid+1)%n]) && (arr[mid] < arr[(mid-1+n)%n]) ) {
            return arr[mid];
        }
        else if(arr[mid] < arr[high]) {
            high = mid;
        }
        else if(arr[mid] > arr[high]) {
            low = mid + 1;
        }
    }
    return arr[ans];
}

int main() {
    ll n;
    cin >> n;
    ll*arr = new ll[n+1];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << rotateFindMin(arr, n);
}