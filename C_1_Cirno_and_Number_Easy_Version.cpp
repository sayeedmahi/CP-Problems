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
        ll a, A;
        int n;
        cin >> a >> n;
        A=a;
        vector<int>b(2);
        for (auto x: b) cin >> x;
        int digit=0;
        while (A>0) {
            digit++;
            A=A/10;
        }
        
    }

    return 0;
}