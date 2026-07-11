#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n+2];
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        int p[k];
        for (int i=0; i<k; i++) {
            cin >> p[i];
        }
        a[0]=a[n+1]=a[p[0]];
        int S=0;
        int count=0;
        for (int i=0; i<p[0]; i++) {
            if (a[i]!=a[i+1]) {
                count++;
                S++;
            }
        }
        int x=count;
        for (int i=0; i<k-1; i++) {
            count=0;
            for (int j=p[i]; j<p[i+1]; j++) {
                if (a[j]!=a[j+1]) {
                    count++;
                    S++;
                }
            }
            x=max(x, count);
        }
        count=0;
        for (int i=p[k-1]; i<n+1; i++) {
            if (a[i]!=a[i+1]) {
                count++;
                S++;
            }
        }
        x=max(x, count);
        cout << max(x, S/2) << endl; 
    }
    return 0;
}