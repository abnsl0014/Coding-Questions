#include<bits/stdc++.h>
using namespace std;
void mergeArrays(long int arr1[], long int arr2[], long int n1,
                             long int n2, long int arr3[])
{
    long int i = 0, j = 0, k = 0;

    // Traverse both array
    while (i<n1 && j <n2)
    {
        cout<<i<<" "<<j<<endl;
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];

    }
    if(i==n1){
      cout<<i-1<<" "<<j<<endl;
    }
    else if(j==n2){
      cout<<i<<" "<<j-1<<endl;
    }
    else if(i==n1&&j==n2){
      cout<<i-1<<" "<<j-1<<endl;
    }
}
int main()
{

      long int m,n;
       cin>>m>>n;
       long int arr[m],arr2[n],arr3[n+m];
       for(long int i=0;i<m;i++)
       {
           cin>>arr[i];
       }
       for(long int i=0;i<n;i++)
       {
           cin>>arr2[i];
       }
       sort(arr,arr+m);
       sort(arr2,arr2+n);
    mergeArrays(arr,arr2,m,n,arr3);


}
