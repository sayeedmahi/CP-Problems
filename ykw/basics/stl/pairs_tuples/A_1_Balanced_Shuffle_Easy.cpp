#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int balance=0;
    vector <tuple<int, int, char>> v;
    for (int i=0; i < s.size(); i++) {
        v.emplace_back(balance, -i, s[i]);
        if (s[i]=='(') balance++;
        else balance--;
    }
    sort(v.begin(), v.end());
    for (auto &x: v) {
        cout << get<2>(x);
    }

}