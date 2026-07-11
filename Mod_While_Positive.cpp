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
 
    int n, m;
        cin >> n>> m;
        int op=0;
        while (m!=0) {
            int x=n%m;
            op++;
            m=x;
        }
        cout << op << endl;
    return 0;
}