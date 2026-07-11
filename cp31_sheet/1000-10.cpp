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
        char c;
        cin >> c;
        string s;
        cin >>s;
        vector<int>A, B;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='g') B.pb(i);
            else if (s[i]==c) A.pb(i);
        }
        int j=0, ans=0;
        for (int a: A) {
            while (j<B.size() && B[j]<=a) {
                j++;
            }
            int b;
            if (j==B.size()) b=B[0];
            else b=B[j];
            int diff = (b-a+n)%n;
            ans=max(ans, diff);
        }
        cout << ans << endl;
    }
    return 0;
}