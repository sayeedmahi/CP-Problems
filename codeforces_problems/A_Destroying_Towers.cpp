#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin  >> n;
        vector<int>a(n);
        for (int &i:a) cin >>i;
        int mn=a[0];
        int sum=mn;
        for (int i=1; i<n; i++) {
            mn=min(mn, a[i]);
            a[i]=mn;
            sum+=a[i];
        }
        cout << sum << endl;
    }
    return 0;
}