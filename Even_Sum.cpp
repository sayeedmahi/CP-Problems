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
        vector<int>a(n);
        for (int &i:a) { 
            cin >>i;
        }
        int odd=0,even=0;
        for (int i:a) {
            if (i%2==0) even++;
            else odd++;
        }
        if (even==0) {
            if (odd%2!=0) cout <<"Yes" << endl;
            else cout <<"No" << endl;
        }
        else cout << "Yes" <<endl;
    }
    return 0;
}