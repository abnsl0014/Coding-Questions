#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[25][25];
	for(int i=0;i<25;i++) {
		for(int j=0;j<25;j++) {
			arr[i][j] = 0;
		}
	}
	for(int i=0;i<25;i++){
		arr[0][i] = 1;
	}
	for(int i=1;i<24;i++) {
		for(int j=25-i-1; j<25;j++) {
			if(j==25-i-1) arr[i][j] = arr[i-1][j];
			else arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}
	for(int i=0;i<25;i++) {
		for(int j=0;j<25;j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}