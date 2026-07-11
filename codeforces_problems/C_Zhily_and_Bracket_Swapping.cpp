#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a>> b;
        vector<int>diff;
        for (int i=0; i<n; i++) {
            if (a[i]==b[i]) diff.push_back(i);
        }
        if (diff.size() % 2 !=0) {
            cout << "NO" << endl;
            continue;
        }
        int balA=0, balB=0, cnt=0, ok=1;
        for (int i=0; i<n; i++) {
            char chA, chB;
            if (a[i]==b[i]) {
                chA=a[i];
                chB=a[i];
            }
            else {
                if (cnt%2==0) {
                    chA='(';
                    chB=')';
                }
                else {
                    chA=')';
                    chB='(';
                }
                cnt++;
            }
            if (chA=='(') balA++; else balA--;
            if (chB=='(') balB++; else balB--;
            if (balA<0 || balB<0) {
                ok=-1;
                break;
            }
        }
        if (balA!=0 || balB!=0) ok=-1;
        if (ok==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}