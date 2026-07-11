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
        int n, m;
        cin >> n >> m;
        vector<int>a(n);
        vector<int>b(m); 
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<m; i++) {
            cin >> b[i];
        }
        
    }

    return 0;
}