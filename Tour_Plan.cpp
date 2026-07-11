#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;
    if (z<=50) cout << x << endl;
    else {
        cout << x + (z-50)*y << endl;
    }


    return 0;
}