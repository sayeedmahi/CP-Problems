#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long>a(n);
        for (auto &x: a) {
            cin >> x;
        }
        int pos=0;
        for (int j=1; j<n-1; j++) {
            int i=-1;
            int k=-1;
            for (int left=0; left<j; left++) {
                if (a[left] < a[j]) {
                    i=left;
                    break;
                }
            }
            for (int right=j+1; right<n; right++) {
                if (a[right] < a[j]) {
                    k=right;
                    break;
                }
            }
            if (i!=-1 && k!=-1) {
                cout << "YES" << endl << i+1 << " " << j+1 << " " << k+1 << endl;
                pos=1;
                break;
            }
        }
        if (pos==0) cout << "NO" << endl;
    }
    return 0;
}