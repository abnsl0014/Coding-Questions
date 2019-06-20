#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
using namespace std;



void dfsh(ll& r,ll node,map<ll,bool>&visited,ll &sum,ll k,ll &s,unordered_map<ll,ll>m,map<ll,map<ll,ll> >l){
   
    visited[node]=true;
     // static ll h=0;
   
     r=max(r,sum-m[node]-k);
    
    
    // sum=r;
    //cout<<"2."<<" "<<m[node]<<"r"<<r<<" "<<"sum"<<sum;
    //cout<<endl;
    
     
  
    for(auto neighbour:l[node]){
                //h=0;
                dfsh(r,neighbour.second,visited,sum,k,s,m,l);
                //h=0;
    }
     ll h=0;
    // sum=r;
     if(m[node]<0){
       h+=m[node];
       h+=k;
       r=max(r,sum-h);
      //if(sum-h>r){
       sum=r;
       //}
      }
     
      
    //sum=r;
     // cout<<"h"<<" "<<h<<"node"<<m[node]<<"r"<<r <<"sum"<<sum;
      //cout<<endl;
    
   
   // return sum;
}

void dfs(ll& r,ll src,ll &sum,ll k,ll &s,unordered_map<ll,ll>m,map<ll,map<ll,ll> >l){
    map<ll,bool>visited;
    dfsh(r,src,visited,sum,k,s,m,l);
}
int main(){
    //SPEED
    ll t,j,k,n,m,c,x,ans;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll z,sum=0,s=0,r;
        unordered_map<ll,ll> m;
        map<ll , map<ll,ll> >l;
         for(ll i=1;i<=n;++i){
        	cin>>z;
        	sum+=z;
        	m[i]=z;
        }
        r=sum;
        
        ll g=n-1,u,v;
        while(g--){
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
        
         for(ll i=n;i>=1;--i){
            //cout<<i<<"--> ";
            ll a=0;
        	for(auto vertex : l[i]){
        		a+=m[vertex.second];
        	}
        	m[i]+=a;
        	//cout<<m[i]<<" ";
        	//cout<<endl;
        }
        ll src=1;
        
       dfs(r,src,sum,x,s,m,l);
       //cout<<m[1]<<"map";
       //cout<<sum<<endl;
       cout<<r<<endl;
    
        }
        
    
    return 0;
}