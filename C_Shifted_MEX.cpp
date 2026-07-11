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
        cin >> n;
        vector<ll>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans=1, consc=1;
        for (int i=0; i<n-1; i++) {
            if (a[i]==a[i+1]-1) consc++;
            else if (a[i]<a[i+1]-1) consc=1;
            else continue;
            ans=max(ans, consc);
        }
        ans=max(ans, consc);
        cout << ans << endl;
    }
    return 0;
}