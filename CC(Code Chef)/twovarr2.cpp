#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long x;
        cin>>x;
        long long int j = x*x ;
        int ans=0;long long int sum=0;
        long i=1;
        while(1){
             i=sqrt(sum)+1;
             long k=i*i;
            //if(sum < k ){
                //cout<<"ndnd";
                long temp = sum + k;
                //cout<<temp<<endl;
                if(j > temp){
                    //cout<<sum<<endl;
                    ans++;
                    sum = temp;
                }
                else{
                    break;
                }
            //}
            //i++;
        }
        cout<<ans+1<<endl;
    }
	return 0;
}