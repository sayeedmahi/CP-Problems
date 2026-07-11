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
        vector<int>a(n);
        vector<int>b(n);
        for (auto &i:a) {
            cin >> i;
        }
        for (auto &j:b) {
            cin >> j;
        }
        for(int i=0; i<n; i++) {
            if(a[i]>b[i]) swap(a[i],b[i]);
        }
        int mx=0;
        for(int i: a) {
            mx=max(i,mx);
        }
        ll sum=0;
        for(int i=0; i<n; i++) {
            sum+=b[i];
        }
        cout << mx+sum << endl;      
    } 
    return 0;
}  