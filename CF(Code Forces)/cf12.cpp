#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter=0;
    cin>>n>>m;
    while(n!=0&&m!=0)
    {
        counter++;
        n--;
        m--;
    }
    if((counter%2)==0){
        cout<<"Malvika";cout<<endl;}
        else
        cout<<"Akshat";cout<<endl;

}
