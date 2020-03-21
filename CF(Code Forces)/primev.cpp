#include<bits/stdc++.h>
using namespace std;
int arr[100005]={0};
int main() {
	int a=100000;
	arr[2]=1;
	for(int i=3;i<=a;i+=2)
	{
        arr[i]=1;
	}
	for(long long int i=3;i<=a;i+=2)
	{
		if(arr[i]==1)
		{
            for(long long int k=i*i;k<=a;k+=i)
            {
                arr[k]=0;
		    }
		}
	}
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int j=1,n;
		cin>>n;
		if(n==1)
		{
			cout<<"2";
		}
	for(int k=3;k<=a;k+=2)
	{
		if(arr[k]==1)
		{
			j++;
			if(j==n)
			{
				cout<<k<<endl;
			}
		}
	}
    }
	return 0;
}