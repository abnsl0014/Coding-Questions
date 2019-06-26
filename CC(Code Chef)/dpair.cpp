#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,co=0;
    set<int>s;
    int k=s.size();
    cin>>n>>m;
    long int arr[n],arr1[m];
    for(long int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(long int i=0; i<m; i++)
    {
        cin>>arr1[i];
    }
    for(long int i=0; i<n; i++)
    {
        for(long int j=0; j<m; j++)
        {
            s.insert(arr[i]+arr1[j]);
            if(k!=s.size()&&co<n+m-1)
            {
                cout<<i<<" "<<j<<endl;
                co++;
            }
            k=s.size();
        }
    }

}
