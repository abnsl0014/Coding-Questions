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

int main(){

    //SPEED

    ll t,i,j,k,n,m,x;

    cin>>t;

    ll*a=new ll[1000000];

    vector<ll>v;

    for (ll i = 0; i <=1000000; ++i)

    {

        if(i%2) a[i]=1; 

    }



    for (ll i = 3; i <=1000000; i+=2)

    {

        if(a[i]){

            for (ll j = i*i; j <=1000000; j+=i)

            {

                a[j]=0;

            }

        }

    }

    a[1]=0;a[0]=0;a[2]=1;

    for(ll i=0;i<=1000000;++i){

      if(a[i]) v.pb(i);

    }

    while(t--){

      ll ans,c=0;

    cin>>n;

   //ll c=0;

    

    cout<<v[n-1];br

    }

    return 0;

}