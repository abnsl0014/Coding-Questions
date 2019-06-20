
#include<iostream>
using namespace std;
int main() {
  int q;
  cin>>q;
  while(q--)
  {
    int a,b,counter=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
            int qr=i;
      while(qr>0)
      {
        counter+=(qr&1);
        qr=qr>>1;

      }
    }
    cout<<counter<<endl;
  }
	return 0;
}
