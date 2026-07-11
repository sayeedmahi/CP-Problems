#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll  n, a, b;
        cin >> n >> a>> b;
        ll p=n/3;
        ll c1= n*a;
        ll c2= (p+1)*b;
        ll c3= p*b + (n-(p*3))*a;
        cout << min(min(c1, c2), c3)<< endl;
    }

    return 0;
}