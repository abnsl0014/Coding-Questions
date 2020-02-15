#include <bits/stdc++.h>
#define MAXN 100000
#define ll long long int 
using namespace std;
ll parent[MAXN],members[MAXN],size;
bool rm[MAXN];

void dsu(ll n) {
    for(ll i = 1; i <= n; ++i) {
        parent[i] = i;
        members[i] = 1;
    }
}
ll findSet(ll x) {
    if (parent[x] != x) {
        parent[x] = findSet(parent[x]);
    } 
    return parent[x];
}
void merge(ll x,ll y) {
    x = findSet(x);
    y = findSet(y);
    if (x != y) { 
        if (members[y] > members[x]) { 
            swap(x, y); 
        } 
        parent[y] = x; 
        members[x] += members[y]; 
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
	set<ll>st;
	while(m--) {
		cin >> x >> y;
		merge(x, y);
	}
	
	ll ans = 0;
    normalize(n);
	for(ll i=1;i<=n;i++) {
		st.insert(parent[i]);
	}
	cout<<st.size()<<endl;
	
} 