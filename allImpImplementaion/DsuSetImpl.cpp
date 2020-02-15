#include <bits/stdc++.h>
#define MAXN 100000
#define ll long long int 
using namespace std;
ll parent[MAXN],members[MAXN],size;
bool rm[MAXN];
struct cmp {
    bool operator() (const pair<ll, ll> &a,const pair<ll, ll> &b) {
        return a.second < b.second;
    }
};
multiset<pair<ll, ll>,cmp>s;
 
void dsu(ll n) {
    for(ll i = 1; i <= n; ++i) {
        parent[i] = i;
        members[i] = 1;
        s.insert(make_pair(i, 1));
    }
    // for(auto i:s) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
}
ll findSet(ll x) {
    if (parent[x] != x) {
        parent[x] = findSet(parent[x]);
    } 
    return parent[x];
}
void makeleader(int a)
{
	int pa = ancestor(a);
	parent[pa] = parent[a] = a;
}

void merge(ll x,ll y) {
    x = findSet(x);
    y = findSet(y);
    if (x != y) {
        if (members[y] > members[x]) { 
            swap(x, y); 
        } 
        s.erase(s.find(make_pair(x, members[x])));
        s.erase(s.find(make_pair(y, members[y])));
        parent[y] = x; 
        members[x] += members[y]; 
        s.insert(make_pair(x, members[x]));
    } 
}
void normalize(ll n) {
    for(ll i = 1; i <= n; i++) {
        parent[i] = findSet(i);
    }
}
int main() {
	int n, m;
	cin >> n >> m;
    dsu(n);
	ll x, y;
	ll ans = INT_MIN;
	ll mn = INT_MAX;
	//unordered_map<ll, ll>mp;
	//dsu(n);
	//normalize(n);
	while(m--) {
		cin >> x >> y;
		merge(x, y);
        // auto it = s.begin();
        // auto itt = s.rbegin();
       // if(s.begin() == s.rbegin()) cout<<"YEs\n";
        cout<< (*s.rbegin()).second - (*s.begin()).second<<endl;
        //s.clear();
	}
}
	