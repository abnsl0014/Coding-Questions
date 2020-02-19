#include <bits/stdc++.h>
using namespace std;

void perm(char* input,int i) {
  if(input[i] == '\0') {
    cout << input << ",";
    return;
  }
  for(int j = i; i < input[j] != '\0'; j++) {
    swap(input[i], input[j]);
    perm(input, i+1);
    swap(input[i], input[j]);
  }
}

int main() {
  int n;
  cin >> n;
  while(n--) {
    char* input;
    cin >> input;
    perm(input, 0);
  }
  return 0;
}