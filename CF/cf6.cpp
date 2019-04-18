#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0,arr[n],total=0,r=0,sum=0;
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
        total+=arr[j];
    }
    sort(arr,arr+n,greater<int>());
    while(sum<=total/2)
    {
        sum+=arr[i];
        r++;
        i++;
    }
    cout<<r<<endl;
}
