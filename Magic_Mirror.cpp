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
        for (auto &i: a) {
            cin >> i;
        }
        int res=1;
        for (int i=0, j=n-1; i<n-1, j>0; i++, j--) {
            if ((a[i+1]-a[i])!=(a[j]-a[j-1])) {
                res=0;
                break;
            }
        }
        if (res==1) cout << "Yes" << endl;
        else cout <<"No" << endl;

    }

    return 0;
}