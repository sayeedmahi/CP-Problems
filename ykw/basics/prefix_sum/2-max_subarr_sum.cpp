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
 
    int n;
    cin >> n;
    vector<ll>a(n+1), pref(n+1, 0);
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) {
        pref[i]=pref[i-1]+a[i];
    }
    long long max_subarr_sum=a[1];
    long long min_pref_sum=pref[0];
    for (int r=1; r<=n; r++) {
        max_subarr_sum=max(max_subarr_sum, pref[r]-min_pref_sum);
        min_pref_sum=min(min_pref_sum, pref[r]);
    }
    cout << max_subarr_sum << endl;
    return 0;
}