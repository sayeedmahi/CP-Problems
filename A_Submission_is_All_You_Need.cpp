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
        int sum=0;
        for (int &x:a) {
            cin >>x;
            sum+=x;
        }
        for (int x:a) {
            if (x==0) {
                sum++;
            }
        }
        cout << sum << endl;

    }
    return 0;
}