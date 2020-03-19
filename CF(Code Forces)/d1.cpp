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

int getans(string& s, int st, int e, vector<vector<int> >&dp) {
        if(st == e) {
            //ans += s[st];
            return dp[st][e] = 1;
        }
        if(st > e) {
            return 0;
        }
        if(dp[st][e] != -1) return dp[st][e];
        if(s[st] == s[e]) {
            return dp[st][e] = (getans(s, st + 1, e - 1, dp));
        }
        else {
            ll ans = getans(s, st + 1, e, dp);
            ll fans = getans(s, st, e - 1, dp);
            return 0;
        }
       // return getans(s, st + 1, e, dp);
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector<vector<int> >dp(s.length(), vector<int>(s.length(), -1));
        //string ans = "";
        ll an = getans(s, 0, s.length() - 1, dp);
        if(an == 1) {
            cout << s <<"\n";
        }
        else {
            ll fs = 0;
            ll fe = 0; 
            for(ll i = 0; i < dp.size(); i++) {
                for(ll j = i; j < dp.size(); j++) {
                    if(dp[i][j] == 1) {
                        if(abs(j - i) > abs(fe - fs)) {
                            fs = i;
                            fe = j;
                        }
                    }
                }
            }
            for(ll i = fs; i <= fe; i++) {
                cout << s[i];
            }
            cout << "\n";
        }
    }
}