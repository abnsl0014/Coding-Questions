#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,r,k;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a;
            if(a==1)
            {
                r=abs(i-3);
                k=abs(j-3);
            }
        }
    }
    cout<<r+k;
    cout<<endl;
}
