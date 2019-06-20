#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,counter=0;
        cin>>n;
        string s;
        long int arr[27]= {0},arr2[27]= {0},r=0;

        for(long int i=0; i<n; i++)
        {
            cin>>s;
            arr2[27]={0};
            for(int j=0;j<s.length();j++){
            arr2[97-s[j]]=1;
            }
                //arr2[97-a]=1;
                for(int i=0;i<26;i++){
                    if(arr2[97-s[i]]){
                        arr[97-s[i]]=1;
                    }
                    else{
                        arr[97-s[i]]=0;
                    }
                }
            }

            for(int i=0;i<26;i++){
                if(arr[i]){
                    counter++;
                }
            }
            cout<<counter<<endl;

        }

}
