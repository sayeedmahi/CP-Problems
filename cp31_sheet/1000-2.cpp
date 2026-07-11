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
        cin >> n>> k;
        vector<int>a(n);
        for (int &i:a) {
            cin >> i;
        }
        if (k==2) {
            int op=1;
            for (int i:a) {
                if (i%2==0) {
                    op=0;
                    break;
                }
            }
            cout << op << endl;
        }
        else if (k==3) {
            int op=k;
            for (int i:a) {
                if (i%3==0) {
                    op=0;
                    break;
                }
                op=min(op, 3- (i%3));
            }
            cout<< op << endl;
        }
        else if (k==4) {
            int op=k, even=0;;
            for (int i:a) {
                if (i%4==0) {
                    op=0;
                    break;
                }
                if (i%2==0) even++;
                op=min(op, 4- (i%4));
            }
            if (op!=0) {
                if (even>=2) op=0;
                else if (even==1) op=min(1,op);
                else op=min(2,op);
            }
            cout<< op << endl;
        }
        else if (k==5) {
            int op=k;
            for (int i:a) {
                if (i%5==0) {
                    op=0;
                    break;
                }
                op=min(op, 5- (i%5));
            }
            cout<< op << endl;
        }
    }
    return 0;
}