#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;
        vector<int>a(n);
        map<int, int>mp;
        for (int &i:a) {
            cin >> i;
            mp[i]++;
        }
        int ans=-1;
        for (auto i: mp) {
            if (i.second>=2) {
                ans=0;
                break;
            }
        }
        if (ans==-1) cout << ans << endl;
        else if (a[0]==a[n-1]) cout << 0 << endl;
        else {
            ans=100000;
            for (auto i: mp) {
                if (i.second>=2) {
                    int p1, p2;
                    for (int j=0; j<n; j++) {
                        if (a[j]==i.first) {
                            p1=j;
                            break;
                        }
                    }
                    for (int j=n-1; j>=0; j--) {
                        if (a[j]==i.first) {
                            p2=n-j-1;
                            break;
                        }
                    }
                ans=min(ans, (p1+p2));
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}