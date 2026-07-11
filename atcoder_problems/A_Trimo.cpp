#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    string s;
    cin >> n >> s;
    int track=-1;
    for (int i=0; i<n; i++) {
        if (s[i]!='o') {
            track=i;
            break;
        }
    }
    if (track==-1) cout << "";
    else {
        for (int i=track; i<n; i++) {
        cout << s[i];
    }
    }
    return 0;
}