#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        long long int arr[27]= {0};
        set<long long int>v;
        long long int sum=0,mx=-1,flag=0,k;
        for(long int i=0; i<s.size(); i++)
        {

            arr[s[i]-65]++;
        }

        for ( k = 0; k < 26; ++k)
        {
            sum += arr[k];
            mx = max(mx, arr[k]);
            if(arr[k]!=0){
                v.insert(arr[k]);
            }
        }

        sort(arr,arr+26);

        long long int miin=100000000000000000;
        for (k = 2; k <= 26; ++k)
        {
            if(sum % k==0)
            {
                flag++;
                long long int sum2=0,sum3=0,r=k;

                for(int i=25; i>=0, r>0; i--)
                {
                     sum2+=arr[i];
                        if(arr[i]>sum/k){
                            sum3+=(arr[i]-sum/k);
                        }
                        r--;

                }
                miin=min(miin,(sum-sum2)+sum3);
                //cout<<miin<<" ";
            }
        }
        if(v.size()==1){
            cout<<"0"<<endl;
        }
         else
        {
            cout<<min(miin,sum-mx)<<endl;
        }
    }
}
