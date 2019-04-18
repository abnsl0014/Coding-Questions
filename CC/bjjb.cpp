#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
using namespace std;


void dfsh(ll node,map<ll,bool>&visited,ll &sum,ll k,ll &s,unordered_map<ll,ll>m,map<ll,map<ll,ll> >l){
    visited[node]=true;
    
    for(auto neighbour:l[node]){
        if(!visited[neighbour.second]){
            dfsh(neighbour.second,visited,sum,k,s,m,l);
            if((sum-(m[neighbour.second])-k*(s+1)) > sum-(k*s)){
                sum-=m[neighbour.second];
                sum-=k;
                s++;
            }
        }
    }
    
   // return sum;
}

void dfs(ll src,ll &sum,ll k,ll &s,unordered_map<ll,ll>m,map<ll,map<ll,ll> >l){
    map<ll,bool>visited;
    dfsh(src,visited,sum,k,s,m,l);
}
int main(){
    //SPEED
    ll t,j,k,n,m,c,x,ans;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll z,sum=0,s=0;
        unordered_map<ll,ll> m;
        map<ll , map<ll,ll> >l;
         for(ll i=1;i<=n;++i){
            cin>>z;
            sum+=z;
            m[i]=z;
        }
        
        ll r=n-1,u,v;
        while(r--){
            cin>>u>>v;
            l[u][m[v]]=v;
            //l[v].push_back(m[u]);
        }

        //print 
       //l[1].first=m[1];
        /*for(ll i=1;i<=n;++i){
            cout<<i<<"--> ";
            for(auto vertex : l[i]){
                cout<<vertex.first<<" two "<<vertex.second<<" ";
            }
            cout<<endl;
        }
        */
        
         for(ll i=1;i<=n;++i){
            //cout<<i<<"--> ";
            ll a=0;
            for(auto vertex : l[i]){
                a+=vertex.first;
            }
            m[i]+=a;
            //cout<<m[i]<<" ";
            //cout<<endl;
        }
        ll src=1;
        
       dfs(src,sum,x,s,m,l);
       
       cout<<sum<<endl;
    
        }
        
    
    return 0;
}