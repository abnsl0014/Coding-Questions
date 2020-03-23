#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int>e, s, t, p, o;
    e[10] = 5;
    e[20] = 50;
    e[30] = 70;
    e[40] = 80;
    e[50] = 80;
    e[60] = 80;
    e[70] = 80;
    e[80] = 80;
    e[90] = 80;
    e[100] = 80;

    s[10] = 20;
    s[20] = 25;
    s[30] = 30;
    s[40] = 40;
    s[50] = 50;
    s[60] = 60;
    s[70] = 75;
    s[80] = 70;
    s[90] = 65;
    s[100] = 60;

    t[10] = 15;
    t[20] = 25;
    t[30] = 35;
    t[40] = 45;
    t[50] = 60;
    t[60] = 55;
    t[70] = 55;
    t[80] = 50;
    t[90] = 45;
    t[100] = 45;

    p[10] = 10;
    p[20] = 15;
    p[30] = 20;
    p[40] = 35;
    p[50] = 45;
    p[60] = 65;
    p[70] = 70;
    p[80] = 70;
    p[90] = 70;
    p[100] = 70;

    o[10] = 5;
    o[20] = 10;
    o[30] = 10;
    o[40] = 15;
    o[50] = 15;
    o[60] = 20;
    o[70] = 20;
    o[80] = 25;
    o[90] = 30;
    o[100] = 35;

    int sum = INT_MIN;
    vector<int>v;
    for(auto i : e) {
        for(auto j : s) {
            for(auto k : t) {
                for(auto l : p) {
                    for(auto m : o) {
                        if((i.first + j.first + k.first + l.first + m.first) == 100) {
                            if(sum < (i.second + j.second + k.second + l.second + m.second)) {
                                sum = (i.second + j.second + k.second + l.second + m.second);
                                if(v.size() != 0) {
                                    v.clear();
                                }
                                v.push_back(i.first);
                                v.push_back(j.first);
                                v.push_back(k.first);
                                v.push_back(l.first);
                                v.push_back(m.first);
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "\n";
    cout <<"Partition is ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << "\n";
    cout << "Max Revenue is " << sum << "\n";
    

}