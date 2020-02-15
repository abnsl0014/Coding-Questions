#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void sieve(ll* arr, ll n = 32005) {
  //  memset(arr, 1, sizeof(arr));
    for(ll i=0;i<=32005;i++) arr[i]=1;
    arr[0] = 0;
    arr[1] = 0;
    for(ll i = 2; i <= n; i++) {
        if(arr[i]) {
            for(ll j = i * i; j <= n; j+=i) {
                arr[j] = 0;
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
   ll t;
   cin >> t;
   ll arr[100007];
   sieve(arr);
   while(t--) {
       ll m,n;
       cin >> m >> n;
      // ll g = sqrt(n);
       
       ll brr[n-m+2];
      for(ll i=0;i<=(n-m+1);i++) brr[i] = 1;
       for(ll i = 2; i*i <= n; i++) {
       		if(arr[i]) {
       			
       		ll base = (m/i)*i;
       		if(base<m) base+=i;
           for(ll j = base; j <= n;j+=i ) {
                   //if(j==i){
                   //	// j++;
                   //	 continue;
                   //}
                   //if(j%i == 0) {
                   	brr[j-m] = 0;
                   //	j+=i;
                  // }
           }
           if(base==i) brr[base-m] = 1;
           }
       }
    //   for(ll i=0;i*i<=n;i++) {
    //       cout<<arr[i]<<" ";
    //   }
      for(ll i = 0 ; i <= n-m; i++) {
          if(brr[i] && i+m != 1) cout<<i+m<<"\n";
      }
       cout<<"\n";
   }
}