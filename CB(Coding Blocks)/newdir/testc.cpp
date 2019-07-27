#include<bits/stdc++.h>
using namespace std;
    int main() {
        int t;
           int n , x;
            cin >> n >> x;
            int y;
            unordered_map<int,int> mp;
           // int *arr = new int[n + 1];
         //  vector < pair<int,int> > v;
            //int *brr = new int[n + 1];
            for (int  i = 0; i < n; i++) {
                cin >> y;
                //v.push_back(make_pair(y,i));
                mp[i] = y;
            }
            //sort(v.begin(),v.end());
            //int k = n - 1;
            // for (auto it = mp.begin(); it != mp.end(), x-1 > 0; it++) {
            //         //if(x == 0) break;
            //         auto itt = mp.find(v[k].second);
            //       // if(itt != mp.end()){
            //         if (it != itt){
            //             swap(it->second,itt->second);
            //             cout << "yes" <<" ";
            //         //   int temp = itt -> second;
            //         //   itt -> second = it -> second;
            //         //   it -> second = temp;
            //             x--;
            //           //  if(x<= 0) break;
            //         }
            //       // }
            //         k--;
            // }
            for (auto it = mp.begin(); it != mp.end(); it++ ) {
                cout << it->second <<" ";
            }  
    }