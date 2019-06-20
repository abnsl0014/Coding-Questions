#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        long long int arr[26]= {0};
        vector<int>v;
        long long int sum=0,mx=-1,flag=0,k;
        for(long int i=0; i<s.size(); i++)
        {

            arr[s[i]-65]++;
        }

        for ( k = 0; k < 26; ++k)
        {
            sum += arr[k];
            mx = max(mx, arr[k]);
        }

        sort(arr,arr+26);

        long long int miin=100000000000000000;
        for (k = 2; k <= 26; ++k)
        {
            if(sum % k==0)
            {
                flag++;
                long long int sum2=0,sum3=0,r=k;

                for(int i=25; i>=0; i--)
                {
                    if(k--)
                    {
                        sum2+=v[i];
                        if(arr[i]>sum/k){
                            sum3+=(arr[i]-sum/k);
                        }
                        //k--;
                    }
                }
                miin=min(miin,(sum-sum2)+sum3);
                //cout<<miin<<" ";
            }
        }

        if(flag)
        {
            cout<<miin<<endl;
        }
        else
        {
            cout<<sum-mx<<endl;
        }
    }
}
