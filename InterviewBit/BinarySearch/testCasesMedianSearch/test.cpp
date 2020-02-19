#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	int g = 98;
	cin>>a>>b;
	cout<<a<<" "<<b;
	cout<<endl;
	for(int i = 0; i < a; i++) {
		g-=91;
		for(int j = 0; j < b ;j++) {
			cout<<g<<" ";
			g+=87;
		}
	}
}