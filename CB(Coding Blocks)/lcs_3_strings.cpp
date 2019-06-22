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
    ll n,m,x,ans;
    //cin>>n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll dp[20][20][20];
    for(int i=0;i<=s1.length();i++)  dp[0][0][i]=0;
    for(int i=0;i<=s2.length();i++)  dp[0][i][0]=0;
    for(int i=0;i<=s3.length();i++)  dp[i][0][0]=0;

    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            for(int k=1;k<=s3.length();k++){
                if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                }
                else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }

    // for(int i=0;i<=s1.length();i++){
    //     for(int j=0;j<=s2.length();j++){
    //         for(int k=0;k<=s3.length();k++){
    //            cout<<dp[i][j][k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
    cout<<dp[s1.length()][s2.length()][s3.length()]<<endl;
return 0;
}