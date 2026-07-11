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
        cin >>n;
        vector<ll>a(n), b(n);
        for (ll &x:a) {
            cin >>x;
        }
        for (ll &x:b) {
            cin >>x;
        }
        vector<ll>longest_subarr_a(2*n+1, 0), longest_subarr_b(2*n+1, 0);
        ll counter=1;
        for (int i=1; i<n; i++) {
            if (a[i]==a[i-1]) counter++;
            else {
                longest_subarr_a[a[i-1]]=max(longest_subarr_a[a[i-1]], counter);
                counter=1;
            }
        }
        longest_subarr_a[a[n-1]]=max(longest_subarr_a[a[n-1]], counter);
        counter=1;
        for (int i=1; i<n; i++) {
            if (b[i]==b[i-1]) counter++;
            else {
                longest_subarr_b[b[i-1]]=max(longest_subarr_b[b[i-1]], counter);
                counter=1;
            }
        }
        longest_subarr_b[b[n-1]]=max(longest_subarr_b[b[n-1]], counter);
        ll ans=0;
        for (int i=1; i<=2*n; i++) {
            ans=max(ans, longest_subarr_a[i]+longest_subarr_b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}