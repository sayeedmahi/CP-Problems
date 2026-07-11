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
        int n, x;
        cin >> n >>x;
        vector<pair<string, string>>teams, match;
        for (int i=0; i<n; i++) {
            string s, b;
            cin >> s>> b;
            teams.push_back({s, b});
        }
        int m;
        cin >>m;
        for (int i=0; i<m; i++) {
            string a, b;
            cin >> a>>b;
            match.push_back({a, b});
        }
        for (int i=0; i<m; i++) {
            string tmp1, tmp2;
            int ok1=0, ok2=0;
            for (int j=0; j<n; j++) {
                if (teams[j].first==match[i].first) {
                    tmp1=teams[j].second;
                    ok1=1;
                }
                if (teams[j].first==match[i].second) {
                    tmp2=teams[j].second;
                    ok2=1;
                }
            }
            
        }
    }
    return 0;
}