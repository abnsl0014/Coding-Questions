#include<iostream>
#include<stack>
using namespace std;

int main() {
   int n;
   cin>>n;
   stack<int>s1,s2;
   for(int i=0;i<n;i++) {
       s1.push(i);
   } 
   while(!s1.empty()) {
       int x=s1.top();
       s1.pop();
       s2.push(x);
   }
   while(!s2.empty()) {
       cout<<s2.top()<<" ";
       s2.pop();
   }
}