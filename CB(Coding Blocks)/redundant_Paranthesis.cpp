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

bool isgood(string s) {
    stack<char>st;
    ll i=0,l=0;
    char x;
    while(i<s.length()) {
        char c=s[i];
        if(c==')') {
            //st.push(c);
            x=st.top();
          //  cout<<x<<endl;
            ll ch=0;
            while(x!='(') {
                x=st.top();
                st.pop();
                ch++;
            }
            if(ch<1) {
                l=1;
                break;
            }
            i++;
        }
        else {
            st.push(c);
            i++;
        }
    }
    if(l==1) return false;
    else return true;
}
int main() {
    SPEED
    ll n,m,x,ans;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        isgood(s)?cout<<"Not Duplicates":cout<<"Duplicate";
        cout<<endl;
    }
    return 0;
}