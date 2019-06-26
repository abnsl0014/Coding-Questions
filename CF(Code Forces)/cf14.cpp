#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int counter=0,n,i;
    cin>>s;
    n=s.size();
    for( i=0;i<n-2;i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
            if(counter==1){
                cout<<" ";
            }
        }
        else{
            cout<<s[i];
            counter=1;
        }
    }
    while(i!=n)
    {
        cout<<s[i];
        i++;
    }
}
