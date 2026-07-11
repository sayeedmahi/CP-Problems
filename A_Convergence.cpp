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
        vector<int>a(n);
        for (int &i:a) {
            cin >>i;
        }
        sort(all(a));
        int midind=a.size()/2;
        int mid=a[a.size()/2];
        int cnt1=0, cnt2=0;
        for (int i=0; i<midind; i++) {
            if (a[i]!=mid) cnt1++;
        }
        for (int i=midind+1; i<=a.size()-1; i++) {
            if (a[i]!=mid) cnt2++;
        }
        cout << max(cnt1,cnt2) << endl;
    }
    return 0;
}