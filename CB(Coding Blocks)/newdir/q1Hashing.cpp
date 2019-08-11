#include<bits/stdc++.h>
using namespace std;
    int main() {
        int t;
           int n , x;
            cin >> n >> x;
            unordered_map<int,int> mp;
            int *arr = new int[n + 1];
            //int *brr = new int[n + 1];
            for (int  i = 0; i < n; i++) {
                cin >> arr[i];
                mp.insert({i,arr[i]});
            }
            sort(arr,arr+n);
            int k = n - 1;
            for (auto it : mp) {
                    if(x == 0) break;
                    auto itt = mp.find(arr[k]);
                    if (it.second != itt.second){
                        swap(it.second,itt.second);
                        x--;
                    }
                    k--;
            }
            for (auto it : mp ) {
                cout << it.second <<" ";
            }  
    }
