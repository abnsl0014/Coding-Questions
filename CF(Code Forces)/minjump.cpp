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

ll getans(string &s, int st, int e, int* visited, vector<int>& dp) {
    
    if(st == e) {
        return 0;
    }
    if(dp[st] != -1) {
        return dp[st];
    }
    if(visited[st] > 2) {
        ll mn = INT_MIN;
        return mn;
    }
    if(s[st] == 'R') {
        ll mn = INT_MAX;
        for(int i = st + 1; i <= e ; i++) {
            if(visited[i] < 2) {
                visited[i]++;
                ll cost = max((ll)abs(i - st), getans(s, i, e, visited, dp));
                visited[i]--;
                mn = min(cost, mn);
            }
        }
        return dp[st] = mn;
    }
    if(s[st] == 'L' ) {
        ll mn = INT_MAX;
        for(int i = st - 1; i >= 0; i--) {
            if(visited[i] < 2) {
                visited[i]++;
                ll cost = max((ll)abs(st - i), getans(s, i, e, visited, dp));
                visited[i]--;
                mn = min(cost, mn);
            }
        }
        return dp[st] = mn;
    }
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        ll n = s.length();
        string fs = "R";
        for(int i = 0; i < s.length(); i++) {
            fs += s[i];
        }
        vector<int>dp(n + 3, -1);
        int visited[n+3] = {};
        cout << getans(fs, 0, n+1 , visited, dp) << "\n";
        // for(int i = 0; i < dp.size(); i++) {
        //     cout << dp[i] <<" ";
        // }
        // for(int i = 0; i < dp.size(); i++) {
        //     cout << visited[i] <<" ";
        // }
    }
}