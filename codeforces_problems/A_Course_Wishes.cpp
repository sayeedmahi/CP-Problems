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
        vector<int>a(k);
        for (int &i:a) {
            cin >>i;
        }
        vector<int>b(n);
        for (int &i:b) {
            cin >>i;
        }
        vector<pii>mp;
        for (int i=0; i<n; i++) {
            mp.push_back({b[i], i+1});
        }
        sort(mp.begin(), mp.end(), greater<pair<int, int>>());
        int op=0;
        for (auto &i: mp) {
            int diff= k+1-i.first;
            op+=diff;
        }
        cout << op << endl;
        for (auto &i: mp) {
            int diff= k+1-i.first;
            while(diff--) {
                cout << i.second << " "; 
            }
        }
        cout<< endl;
    }
    return 0;
}
    