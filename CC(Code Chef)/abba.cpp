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



int countPS(string str) 
{ 
    int N = str.length(); 
    int cps[N+1][N+1]; 
    memset(cps, 0 ,sizeof(cps));  
    for (int i=0; i<N; i++) 
        cps[i][i] = 1;  
    for (int L=2; L<=N; L++) 
    { 
        for (int i=0; i<N; i++) 
        { 
            int k = L+i-1; 
            if (str[i] != str[k]) 
                 cps[i][k] = cps[i][k-1]+cps[i+1][k]-cps[i+1][k-1]; 
            else{
            	cps[i][k] = cps[i][k-1]+cps[i+1][k] + 1;
            }                
        } 
    }  
    return cps[0][N-1]; 
}


int main(){
    SPEED
    ll t,i,j,k,n,m,c,x,ans;
    string s;
    cin>>s;
    cout<<countPS(s)<<endl;
    return 0;
}