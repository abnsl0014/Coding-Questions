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
        long long int arr[27]= {0};
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
        int l=0;
        for(k=0; k<26; k++)
        {

            if(arr[k]!=0)
            {
                v.push_back(arr[k]);
                l++;
            }
        }
        sort(v.begin(),v.end());

        long long int miin=100000000000000000;
        for (k = 2; k <= 26; ++k)
        {
            if(sum % k==0)
            {
                flag++;
                long long int sum2=0,r=k;

                for(int i=v.size()-1; i>=0; i--)
                {
                    if(v[i]>sum/k)
                    {
                        sum2+=v[i];
                        //k--;
                    }
                }
                miin=min(miin,abs(sum2-sum/k));
                cout<<miin<<" ";
            }
        }

        if(flag)
        {
            cout<<miin<<endl;
        }
        else
        {
            cout<<mx-sum<<endl;
        }
    }
}
