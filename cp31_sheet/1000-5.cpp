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
        int n, k;
        cin >> n>> k;
        vector<int>a(n);
        for (int &x:a) {
            cin >> x;
            x=x%k;
        }
        vector<pair<int, int>>p;
        for (int i=0; i<n; i++) {
            p.push_back({a[i], i});
        }
        sort(p.begin(), p.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
            if (a.first == 0 && b.first == 0)
                return a.second < b.second;

            if (a.first == 0) return true;
            if (b.first == 0) return false;

            if (a.first != b.first)
                return a.first > b.first;

            return a.second < b.second; 
        });
        for (int i=0; i<p.size();i++) {
            cout << p[i].second + 1 << " ";
        }
        cout << endl;
        
    }
    return 0;
}