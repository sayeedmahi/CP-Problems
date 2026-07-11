#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i=0; i<n; i++) {
        cin >> a[i] >> b[i];
        b[i]--;
    }
    int m;
    cin >>m;
    vector<string>s(m);
    for (int i=0; i<m; i++) {
        cin >> s[i];
    }
    int has[11][11][26]={};
    for (int i=0; i<m; i++) {
        int len=s[i].size();
        for (int j=0; j<len; j++) {
            has[len][j][s[i][j]-'a']=1;
        }
    }
    for (int i=0; i<m; i++) {
        if (s[i].size()!=n) {
            cout << "No" << endl;
            continue;
        }
        int ok = 1;
        for (int j=0; j<n; j++) {
            int len=a[j];
            int pos=b[j];
            char c= s[i][j];
            if (has[len][pos][c-'a']!=1) {
                ok=0;
                break;
            }
        }
        if (ok==1) cout <<"Yes" << endl;
        else cout <<"No" << endl;
    }
    return 0;
}