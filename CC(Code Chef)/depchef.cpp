#include<bits/stdc++.h>
using namespace std;

int main(){

        long long
        int t;cin>>t;
        while(t--){
            int n,maxi=-1;cin>>n;
            int a[n],d[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
             for(int i=0;i<n;i++){
                cin>>d[i];
            }
            if((d[0]-(a[1]+a[n-1]))>0){
                maxi=d[0];
            }
            for(int i=1;i<n-1;i++){
                if((d[i]-(a[i-1]+a[i+1]))>0){
                        if(maxi<d[i]){
                            maxi=d[i];
                        }
                }
            }
            if((d[n-1]-(a[n-2]+a[0])>0)){
                if(maxi<d[n-1]){
                    maxi=d[n-1];
                }
            }

            cout<<maxi<<endl;
        }
}
