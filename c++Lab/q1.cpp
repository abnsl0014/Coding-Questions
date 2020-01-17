#include<bits/stdc++.h>
using namespace std;

bool fn(char* str, char* str2, int i) {
    if(i > strlen(str) || i < 0) {
        return false;
    }
    return true;
}
 
int main() {
    char str[50], str2[50];
    cin >> str;
    cin >> str2;
    int index;
    cin >> index;
    (fn(str, str2, index))? cout << 1 : cout << 0; 
    return 0;
}