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
        for (int &x:a) cin >>x;
        set<int>b;
        b.insert(a[0]);
        int nononesegments=0;
        if (a[0]!=1) nononesegments++;
        for (int i=1; i<n; i++) {
            b.insert(a[i]);
            if (a[i]!=1) {
                if (a[i-1]==1)
                nononesegments++;
                else if (a[i]!=a[i-1]) nononesegments++;
            }
        }
        if (b.size()==1) {
            if (*b.begin() == 1) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else if (b.size()==2 && nononesegments==1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}

/*
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
        for (int &x:a) cin >>x;
        int l=0;
        while (l<n && a[l]==1) l++;
        if (l==n) {
            cout << 0 << endl;
            continue;
        }
        int r=n-1;
        while (r>=0 && a[r]==1) r--;
        bool ok=true;
        for (int i=l+1; i<=r; i++) {
            if (a[i]!=a[l]) {
                ok=false;
                break;
            }
        }
        if (ok) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
} 
*/