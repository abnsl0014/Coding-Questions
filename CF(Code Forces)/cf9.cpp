#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));

    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++)
    {
        cout<<v[i].second<<" ";
    }
    cout<<endl;
    return 0;

}
