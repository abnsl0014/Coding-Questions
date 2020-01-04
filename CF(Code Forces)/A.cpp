#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
   ll n;
   cin >> n;
   ll a[n+1];
   queue<ll>q;
   unordered_map<ll, ll> mp;
   ll mx = INT_MIN;
   for(ll i = 0; i < n; i++) {
       cin >> a[i];
       mx = max(mx, a[i]);
       mp[a[i]] = 1;
   }
   for(ll i = 1; i <= 200000; i++) {
       q.push(i);
   }
   for(ll i = 0; i < n; i++) {
       if(a[i] != 0) {
           cout << a[i] << " ";
       }
       else {
           while (true) {
               if(!q.empty()) {
                    if(mp.find(q.front()) == mp.end() && q.front() <= mx) {
                        if((i+1) != q.front() ) {
                        cout << q.front() << " ";
                        q.pop();
                        break;
                        }
                        else {
                            ll o = q.front();
                            q.pop();
                            q.push(o);
                        }
                     }
                    else {
                        q.pop();
                    }
               }
               else {
                   break;
               }
           }
       }
   }
}