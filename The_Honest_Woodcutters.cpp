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
    cin >>n;
    vector<int>a(n), b(n);
    for (int &x:a) {
        cin >> x;
    }
    for (int &x:b) {
        cin >>x;
    }
    bool ans=true;
    for (int i=0; i<n; i++) {
        if (b[a[i]-1]!=i+1) {
            ans=false;
            break;
        }
    }
    if (ans) cout <<"Yes" << endl;
    else cout <<"No" << endl;
    return 0;
}