#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long n, m, i, j;
        cin >> n >> m>> i>> j;
        if ((i<= n/2) && (j<= m/2)){
            cout << n << " " << 1 << " " << 1 << " " << m << endl;
        }
        else if ((i> n/2) && (j<= m/2)){
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
        else if ((i<= n/2) && (j>m/2)){
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
        else if ((i> n/2) && (j>m/2)){
            cout << n << " " << 1 << " " << 1 << " " << m << endl;
        }
    }
    return 0;
}