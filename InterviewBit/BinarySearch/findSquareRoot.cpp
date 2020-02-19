#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll findSquareRoot(ll A) {
   long long int low = 1;
   long long int high = A;
   long long int ans;
   while(low <= high) {
       long long int mid = low + (high - low) /  2;
       if(mid*mid == A){
           return mid;
       }
       else if(mid*mid < A){
           low = mid + 1;
           ans = mid;
       }
       else {
           high = mid - 1;
       }
   }
   if(A==0) return 0; else return ans;  
}

int main() {
    ll  s;
    cin >> s;
    ll ans = findSquareRoot(s);
    cout << ans;
}