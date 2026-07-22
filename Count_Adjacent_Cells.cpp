#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second
void solve() { 
    int h, w;
    cin >>h>>w;
    if (h==1 && w==1) cout << 0<< endl;
    else if (h==1 && w!=1) {
        cout << "1 ";
        int W=w-2;
        while (W--) cout << "2 ";
        cout << "1";
    }
    else if (h!=1 && w==1) {
        cout << "1" << endl;
        int H=h-2;
        while (H--) {
            cout <<"2" << endl;
        }
        cout << "1";
    }
    else if (h==2 || w==2) {
        for (int i=1; i<=h; i++) {
            for (int j=1; j<=w; j++) {
                if ((i==1 && j==1)||(i==1 && j==w) || (i==h && j==1) || (i==h &&j==w)) cout << "2 ";
                else cout <<"3 ";
            }
            cout << endl; 
        }
    }
    else {
        for (int i=1; i<=h; i++) {
            for (int j=1; j<=w; j++) {
                if ((i==1 && j==1)||(i==1 && j==w) || (i==h && j==1) || (i==h &&j==w)) cout << "2 ";
                else if (i==1 || i==h || j==1 || j==w) cout <<"3 ";
                else cout<< "4 ";
            }
            cout << endl; 
        }
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    while (T--) 
    solve();
    return 0; }
