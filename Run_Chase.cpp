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
    int n;
        cin >> n;
        if ((n+1)%20==0)cout << (n+1)/20 << endl;
        else cout << ((n+1)/20)+1 <<endl;
    return 0;
}