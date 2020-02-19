#include<bits/stdc++.h>
using namespace std;

int findPivot(const vector<int> &arr) {
  int  n = arr.size();
    int  high = n - 1;
    int low = 0;
    int ans = 0, mid;
    while(low <= high) {
        if(n==1)  return arr[ans];
         mid = low + ((high - low) / 2);
        if( (arr[mid] < arr[(mid+1)%n]) && (arr[mid] < arr[(mid-1+n)%n]) ) {
            ans = mid;
            return ans;
        }
        else if(arr[mid] < arr[high]) {
            high = mid;
        }
        else if(arr[mid] > arr[high]) {
            low = mid + 1;
        }
    }
         return ans;
}

int search(const vector<int> &A, int B) {
    int n = A.size();
   int m = findPivot(A);
   auto it = std::next(A.begin(), m);
   if( binary_search( A.begin() , it, B)) {
       return lower_bound( A.begin() , it, B) - A.begin();
   }
   else if( binary_search( it , A.end(), B)) {
       return lower_bound( it , A.end(), B) - A.begin();
   }
   else {
       return -1;
   }
}

int main() {
    int n, k, r;
    cin >> n;
    vector<int>V;
    for(int i = 0; i < n; i++) {
        cin >> r;
        V.push_back(r);
    }
    cin >> k;
    cout << search(V, k);
}
