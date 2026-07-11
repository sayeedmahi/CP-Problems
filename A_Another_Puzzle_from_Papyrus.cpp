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
        int n, c;
        cin >> n>>c;
        vector<int>a(n), b(n);
        for (int &x:a) cin>>x;
        for (int &x:b) cin >>x;
        int ans1=0;
        for (int i=0; i<n; i++) {
            if (a[i]<b[i]) {
                ans1=-1;
                break;
            }
            ans1+=a[i]-b[i];
        }
        if (ans1==-1) {
            int ans2=c;
            sort (all(a));
            sort(all(b));
            for (int i=0; i<b.size(); i++) {
                bool found=false;
                for (int j=0; j<a.size(); j++) {
                    if (b[i]<=a[j]) {
                        ans2+=a[j]-b[i];
                        a.erase(a.begin()+j);
                        found=true;
                        break;
                    }
                }
                if (found==false) {
                    ans2=-1;
                    break;
                }
            }
            cout << ans2 << endl;
        } 
        else cout << ans1 << endl;       
    }
    return 0;
}