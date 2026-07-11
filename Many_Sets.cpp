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
        vector<int>a(n);
        for (int i=0; i<2*n ; i++) {
            cin >> a[i];
        }
        int zero1=-1, zero2=-1;
        for (int i=0; i<2*n; i++) {
            if (a[i]==0) {
                if (zero1==-1) zero1=i;
                else zero2=i;
            }
        }

    }

    return 0;
}