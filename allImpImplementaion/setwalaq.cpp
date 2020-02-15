#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool convert(ll n) {
    ll i=n;
    set<ll>s;
    set<ll>s1;
    while(i>0) {
        s.insert(i%10);
        i/=10;
    }
    ll k=n*n*n;
    while(k>0) {
        s1.insert(k%10);
        k/=10;
    }
   // if(s.size() == s1.size()) {
        for(auto i:s) {
            // for(auto j:s1) {
                if(s1.find(i)==s1.end()) {
                    return false;
              //  }
            }
        }
    //}

    return true;
}

int main() {
    ll sum=0;
   for(ll i=1;i<=100;i++) {
        if(convert(i)) {
            sum+=i;
            cout<<i<<endl;
        }  
   }
  cout<<sum;
}