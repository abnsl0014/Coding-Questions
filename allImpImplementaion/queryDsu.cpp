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
    }
}
ll findSet2(ll x, ll x2) {
    
    if (parent[x] != x) {
        parent[x] = findSet2(parent[x], x2);
    }
    else {
        parent[x] = x2;
    }
    return x2;
}
ll findSet(ll x) {
    if (parent[x] != x) {
        parent[x] = findSet(parent[x]);
    } 
    return parent[x];
}
void merge(ll y,ll x,bool tr) {
    if(tr) swap(x, y);
    x = findSet(x);
    y = findSet(y);
    parent[y] = x; 
    members[x] += members[y]; 
}
void makeleader(int a)
{
    int pa = ancestor(a);
    parent[pa] = parent[a] = a;
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
	while(m--) {
	    ll a, b;
		cin >> x ;
		if(x==1) {
		    cin>>a>>b;
		    merge(a, b,false);
		}
		else if(x==2) {
		    cin>>a;
		    ll o = findSet2(a, a);
		}
		else {
		    cin>>a;
		    cout<<findSet(a)<<endl;
		}
	}
}
