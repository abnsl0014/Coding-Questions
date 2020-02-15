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
#define br cout<<endl;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;

void reverseStack2(stack<int>& s,int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }
    ll nw=s.top();
    s.pop();
    reverseStack2(s,x);
    s.push(nw);
}

void reverseStack( stack<int>& s) {
    if(s.empty()) {
        return;
    }
    ll ele=s.top();
    //cout<<ele<<" .1"<<endl;
    s.pop();
    reverseStack(s);
    reverseStack2(s,ele);
    //s.push(ele);
    //cout<<ele<<" .2"<<endl;
}
int main() {
    SPEED
    ll n,m,x,ans;
    stack<int>s;
    cin>>n;
    for(int i = 0; i < n; i++ ) {
        cin >> x;
        s.push(x);
    }
    reverseStack(s);
    while(!s.empty()) {
        ans=s.top();
        s.pop();
        cout<<ans<<" ";
    }

return 0;
}