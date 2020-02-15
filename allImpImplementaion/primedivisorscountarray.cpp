#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll MAX= 1000000;
ll arr[1000000]={};
 
void sieve(ll count[]) 
{ 
    // count[MAX] = {0};
    for (ll i = 2; i * i <= MAX; i++) { 
        // if i is prime 
        if (count[i] == 0) { 
            for (ll j = 2 * i; j < MAX; j += i) 
                count[j]++; 
  
            // setting number of prime 
            // factor of a prime number. 
            count[i] = 1; 
        } 
    } 
} 


int main() {
    sieve(arr);
    for(ll i=2;i<1000000;i++) {
        ll ok=0;
            if(arr[i] == 4 && arr[i] == arr[i+1] && arr[i] == arr[i+2] && arr[i] == arr[i+3]) {
                cout<<i<<" "<<i+1<<" "<<i+2<<" "<<i+3;
                break;
            }
    }
}