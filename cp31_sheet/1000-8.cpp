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
        string s;
        cin >> s;
        vector<int>suff(26,0), pref(26,0);
        for (auto x:s) suff[x-'a']++;
        int ans=0;
        for (auto x:s) {
            suff[x-'a']--;
            pref[x-'a']++;
            int cnt=0;
            for (int i=0; i<26; i++) {
                cnt+=(suff[i]>0) + (pref[i]>0);
            }
            ans=max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}