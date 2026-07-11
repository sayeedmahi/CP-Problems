#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin >> n;
        vector<int>a(n);
        int store=0, count=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]>=80) {
                count++;
                store+=a[i]-80;
            }
        }
        vector<int>b;
        for (int x: a) {
            if (x<80) b.push_back(x);
        }
        sort(b.rbegin(), b.rend());
        for (int x: b) {
            if (80-x<=store) {
                count++;
                store-=80-x;
            }
        }
        cout << count << endl;
    return 0;
}