#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n>> m;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int timer=0;
        int ans=1;
        if ((a[1]+1)%m==0) {
            if ((a[0]+1)%m==0) {
                ans=0;
            }
            else timer++;
        }
        if (ans!=0) {
            for (int i=1; i<n; i++) {
            timer++;
            if ((a[i+1]+timer+1)%m==0) {
                if ((a[i]+timer+1)%m==0) {
                    if ((a[i-1]+timer+1)%m==0) {
                        ans=0;
                        break;
                    }
                    else {
                        if ((a[i+1]+timer+3)%m==0) {
                            ans=0;
                            break;
                        }
                        else timer=timer+2;
                    }
                }
                else timer++;
            }
            else continue;
        }
        }
        if (ans==0) cout <<"NO" << endl;
        else cout <<"YES"<< endl;
    }
    return 0;
}