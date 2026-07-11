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
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        if (gcd(a, n)==1 && 
            gcd(b, m)==1 && 
            gcd(n, m)<=2) {
                cout <<"YES" << endl;
            }
        else cout <<"NO" << endl;

    }
    return 0;
}