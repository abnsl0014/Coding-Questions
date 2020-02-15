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
int main(){
    SPEED
    ll n,m,x=-1,ans=-1,i=0;
    cin>>n;
    in(a,n)
    stack<ll>s;
    ll area;
    while(i<n) {
        if(s.empty()) s.push(i++);
        else if(a[i]>=a[s.top()]) s.push(i++);
        else{
            //while(!s.empty() && s.top()>x) {
                x=s.top();
                s.pop();  
                if(s.empty()) {
                    area=(a[x]*i);
                    ans=max(area,ans);
                }
                else {
                    area=(a[x])*(i-s.top()-1);
                    ans=max(area,ans);
                }
            //}
        } 
    }
    while(!s.empty()) {
            x=s.top();
            s.pop();
         if(s.empty()) {
            area=(a[x]*i);
            ans=max(area,ans);        
            }
        else {
            area=(a[x])*(i-s.top()-1);
            ans=max(area,ans);
        }

    }
    cout<<ans<<endl;
return 0;
}