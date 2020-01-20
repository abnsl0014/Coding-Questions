#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
    ll n, q;
    multiset< pair<ll, ll> > s;
    cin >> n >> q;
    ll track = 0;
    while(q--) {
        ll a, b;
        cin >> a >> b;
        ll temp = 0;
        multiset< pair<ll,ll> > s1;
        if(s.find({a, b}) != s.end()) {

            if(s.find({a-1, b-1}) != s.end()) {
                track--;
            }
            if(s.find({a+1, b-1}) != s.end()) {
                track--;
            }
            if(s.find({a-1, b}) != s.end()) {
                track--;
            }
             if(s.find({a+1, b}) != s.end()) {
                track--;
            }
             if(s.find({a-1, b+1}) != s.end()) {
               track--;
            }
             if(s.find({a+1, b+1}) != s.end()) {
                track--;
            }
            //  cout << track << "\n";
            // for(auto it: s) {
            //     cout<<" first -- > "<<it.first << " second -- > " << it.second << "\n";
            // }
            auto it = s.find({a,b});
            s.erase(it);
            if(track == 0) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
            continue;
        }
        s.insert({a, b});
        if(s.find({a-1, b-1}) != s.end()) {
            temp = 1;
                 track++;
        }
         if(s.find({a+1, b-1}) != s.end()) {
            track++;
        }
         if(s.find({a-1, b}) != s.end()) {
            temp = 1;
            track++;
        }
         if(s.find({a+1, b}) != s.end()) {
            temp = 1;
            track++;
        }
         if(s.find({a-1, b+1}) != s.end()) {
            temp = 1;
           track++;
        }
         if(s.find({a+1, b+1}) != s.end()) {
            temp = 1;
            track++;
        }

        if(track == 0) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
        // cout << track << "\n";
        // for(auto it: s) {
        //     cout<<" first -- > "<<it.first << " second -- > " << it.second << "\n";
        // }
    }
    
 }
