#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n;
vector<int>a;

int mex(int l, int r) {
    set<int>s;
    for (int i=0; i<=n; i++) {
        s.insert(i);
    }
    while (l>=0 && r<n*2 && a[l]==a[r]) {
        s.erase(a[l]);
        l--;
        r++;
    }
    return *s.begin();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        cin >> n; 
        a.resize(2*n);
        for (int i=0; i<2*n; i++) {
            cin >> a[i];
        }
        int x=-1, y;
        for (int i=0; i<2*n; i++) {
            if (a[i]==0) {
                if (x==-1) x=i;
                else y=i;
            }
        }
        int ans= max ({mex(x,x), mex(y,y), mex((x+y)/2, (x+y+1)/2)});
        cout << ans << endl;
    }
    return 0;
}