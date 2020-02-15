#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=0;i<n;++i)
#define in(a,n) ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<' ';br
#define printv(v) vector<ll> :: iterator it;for(it=v.begin();it!=v.end();it++)cout<<*it<<' ';br
#define print2(a,b) cout<<a<<' '<<b;br
#define print3(a,b,c) cout<<a<<' '<<b<<' '<<c;br
#define sum(a,n) ll sum=0;for(ll i=0;i<n;i++)sum+=a[i];
#define br cout<<'\n';
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;

bool isPalin(string s) {
    ll st = 0;
    ll e = s.length() - 1;
    while (st < e)
    {
        if(s[st] != s[e]) {
            return false;
        }
        st++;
        e--;
    }
    return true;
}
int main(){
    SPEED
    ll t, z;
    cin >> t >> z;
    vector<string>v;
    ll ok = 0;
    string f ="";
    while(t--){
        string s;
        cin >> s;
        v.pb(s);
    }
    ll cnt = 0;
    vector<string>vf;
    for(ll i = 0; i < v.size() - 1; i++) {
        for(ll j = i+1; j < v.size(); j++) {
            string str = v[j];
            reverse(str.begin(), str.end());
            if(v[i] == str ) {
                vf.pb(v[i]);
                cnt++;
                v[i] = "-1";
                v[j] = "-1";
            }
        }
    }
    for(ll i = 0; i < v.size(); i++) {
            if(v[i] != "-1") {
                if(isPalin(v[i])) {
                    if(v[i].size() > f.size()) {
                        f = v[i];
                    }
                    ok++;
                }
            }
    }
    if(ok >= 1) {
        cout << 2*cnt*z + z << "\n"; 
    }
    else {
        cout << 2*cnt*z << "\n";
    } 
    if(cnt != 0) {
        for(ll i = 0; i < vf.size(); i++) {
            cout << vf[i];
        }
        if(ok != 0) {
            cout << f;
        }
        for(ll i = vf.size()-1; i >= 0 ; i--) {
            reverse(vf[i].begin(), vf[i].end());
            cout << vf[i];
        }
    }
    else if(ok != 0) {
        cout << f;
    }
}