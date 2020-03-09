#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define fr for(ll i=0;i<n;++i)
#define in(a,n) double a[n];for(ll i=0;i<n;i++)cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<' ';br
#define printv(v) vector<ll> :: iterator it;for(it=v.begin();it!=v.end();it++)cout<<*it<<' ';br
#define print2(a,b) cout<<a<<' '<<b;br
#define print3(a,b,c) cout<<a<<' '<<b<<' '<<c;br
#define sum(a,n) ll sum=0;for(ll i=0;i<n;i++)sum+=a[i];
#define br cout<<endl;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define mod 1000000007
using namespace std;
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, d;
        cin >> n >> d;
        in(a, n)
        vector<ll>s;
        for(ll i = 0; i < d; i++) {
            ll z;
            cin >> z;
            s.push_back(z-1);
            if(z == (n - 1)) {
                s.push_back(z);
            }
        }
        sort(s.begin(), s.end());
        // auto it = s.begin();
        // auto temp = it;
        // it++;
        // for(auto j = it; j != s.end(); j++) {
        //     auto start = temp;
        //     ll chk = 0;
        //     while(*j == (*temp + 1)) {
        //         temp = j;
        //         j++;
        //         chk = 1;
        //     }
        //     auto end = s.begin();
        //     if(chk == 1) {
        //         auto e = s.end();
        //         if(j != (e) ){
        //             end = j;
        //         }
        //         else {
        //             j--;
        //              end = j;
        //             j++;
        //         }
        //     }
        //     else {
        //         auto e = s.end();
        //         end--;
        //         if(j != (e) ){
        //             j++;
        //              end = j;
        //             j--;
        //         }
        //         else {
        //              end = j;
        //         }
        //     }
        //     sort(a + (*start), a + (*end) + 1);
        // }
        ll st = 0;
        for(ll i = 0; i < s.size(); i++) {
            st = i; 
            ll k = 0;
            while(i <= (s.size() - 2) && (s[i+1] == (s[i] + 1))) {
                i++;
                k = 1;
            }
            if(k == 1) {
                i--;
                if(s[i] != n-1) {
                    sort(a + s[st], a + s[i] + 2);
                }
                else {
                    sort(a + s[st], a + s[i] + 1);
                }
            }
            else {
                if(s[i] != n-1) {
                    sort(a+ s[st], a + s[st] + 2);
                }
            }
        }
        ll ok = 1;
        for(ll i = 0; i < n - 1; i++) {
            if(a[i] > a[i+1]) {
                ok = 0;
                break;
            }
        }
        if(ok) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}