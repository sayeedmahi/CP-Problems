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
        int n, k;
        cin >> n >> k;
        string s;
        cin >>s;
        vector<int>a, b;
        int pnt=0;
        int x=-1, y=-1;
        bool reg=false;
        bool New=false;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='(') {
                pnt++;
                if (reg==true && x!=-1 && y!=-1) {
                    New=true;
                    a.pb(x);
                    b.pb(y);
                    x=-1;
                    y=-1;
                }
            }
            else {
                pnt--;
                if ((reg==false||New==true) && pnt>=0) {
                    reg=true;
                    New=false;
                    x=i-1;
                    y=i;
                }
                else if (reg==true && pnt>=0) {
                    x--;
                    y++;
                }
                else if (x!=-1 && y!=-1 && pnt<0) {
                    a.pb(x);
                    b.pb(y);
                    x=-1;
                    y=-1;
                }
            }
        }
    }
    return 0;
}