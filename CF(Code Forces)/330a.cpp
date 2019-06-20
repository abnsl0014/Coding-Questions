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
    SPEED
    ll t,i,j,k=0,n,m,c,x,ans;
    cin>>n>>m;
    int arr[n][m];
    fr{
    	for(ll j=0;j<m;++j){
    		char c;
    		cin>>c;
    		if(c=='S'){
    		arr[i][j]=1;
    		//k++;
    	   }
    		else{
    			arr[i][j]=0;
    		}
    	}
    }
    fr{
    	for(int j=0;j<m;++j){
    		if(arr[i][j]==1){
    			for(int z=0;z<n;++z){
    				arr[z][j]=1;
    			}
    			for(int z=0;z<m;++z){
    				arr[i][z]=1;
    			}
    		}
    		else{
    			for(int z=0;z<n;++z){
    				arr[z][j]=0;
    			}
    			for(int z=0;z<m;++z){
    				arr[i][z]=0;
    			}
    		}
    	}
    }

    fr{
    	for(int j=0;j<m;++j){
    		cout<<arr[i][j];
    		if(arr[i][j]==0){
    			k++;
    		}
    		br;
    	}
    }
    cout<<k;br;
    return 0;
}