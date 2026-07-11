#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

bool isPrime(int n) {
    if (n<2) return false;
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a, b;
    cin >> a>> b;
    set<int>A, B;
    for (int i=1; i*i<=a ;i++) {
        if (a%i==0) {
                A.insert(i);
                A.insert(a/i);
            }
        }
    for (int j=1; j*j<=b; j++) {
        if (b%j==0) {
                B.insert(j);
                B.insert(b/j);
            }
    }
    long long sum = 0;
    for (int x:A) {
        if (B.count(x)) {
            sum+=x;
        }
    }
    cout << sum << endl;
    bool ok1 = true, ok2=true, ok3=true;
    bool ok1 = isPrime(sum);
    bool ok2 = isPrime(sum - 1);
    bool ok3 = isPrime(sum + 1);
    if (ok1==true) cout << "Lucky";
    else {
        if (ok2==true || ok3==true) cout <<"Luckiest Unlucky";
        else cout <<"Unlucky";
    }
    return 0;
}