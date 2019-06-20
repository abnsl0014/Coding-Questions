#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n,m;
  cin>>n>>m;
  long int arr[n],arr2[m];
  for(long int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
   long int min_ele=0;
  for(long int i=0;i<n;i++)
  {
      if(arr[i]<arr[min_ele])
      {
          min_ele=i;
      }
  }

  for(long int i=0;i<m;i++)
  {
      cin>>arr2[i];
  }
  long int max_ele=0;
  for(long int i=0;i<m;i++)
  {
      if(arr2[i]>arr2[max_ele])
      {
          max_ele=i;
      }
  }

  for(long int i=0;i<m;i++)
  {
      cout<<min_ele<<" "<<i<<endl;
  }

  for(long int j=0;j<n;j++)
  {
      if(j!=min_ele){
       cout<<j<<" "<<max_ele<<endl;
      }
  }

}
