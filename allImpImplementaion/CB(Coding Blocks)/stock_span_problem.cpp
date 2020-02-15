#include <iostream>
#include<stack>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    stack<int> s;

    int ans[n]={0};
    ans[0]=1;

    s.push(0);
    
    for(int i=1;i<n;i++){
        
        int index_top=s.top();
        if(a[i]>=a[index_top]){
            //if greater than current element


            while(!s.empty() && a[i]>=a[s.top()]){
                int temp=s.top();
                s.pop();
                ans[i]+=ans[temp];
            }
            s.push(i);
            ans[i]+=1;
            //cout<<"Ans"<<i<<";"<<ans[i]<<endl;
        }else{
            
            ans[i]=1;
            s.push(i);

        }

    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
