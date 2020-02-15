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
ll t;
cin>>t;
while(t--) {
    ll n,m,x,ans,sum=0;
    cin>>n;
    in(a,n)
    ll i=0;
    if(n==1){
        cout<<a[0]<<endl;
        continue;
    }
    else if(n==2){
        if(a[1]<a[0]) cout<<a[1]+2*a[0]<<endl;
        else cout<<a[0]+2*a[1]<<endl;
        continue;
    }
    while(i < n) {
        if(a[i] > a[i+1]) {
            if(a[i+2] < a[i+1]) {
                if((i*a[i+1])+((i+1)*a[i]) > (a[i+2]*(i+1) + a[i+1]*(i+2))){
                    sum+=(i*a[i+1])+((i+1)*a[i]);
                    i+=2;
                }
                else {
                    sum+=(i*a[i+1]);
                    sum+=(a[i]*(i+1));
                    i+=2;
                }
            }
            else {
                sum+=(i*a[i+1]);
                    sum+=(a[i]*(i+1));
                    i+=2;

            }
        }
         else{
                i++;
                sum+=a[i];
            }
    }
    cout<<sum<<endl;
}
return 0;
}