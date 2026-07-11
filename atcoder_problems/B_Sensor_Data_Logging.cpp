#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x;
    cin >> t>> x;
    int a[t+1];
    for (int i=0; i<=t; i++) {
        cin >> a[i];
    }
    int count =0;
    int recent=a[0];
    cout << count << " " << recent << endl;
    for (int i=1; i<=t; i++) {
        count++;
        if (abs(a[i]-recent)>=x) {
            recent=a[i];
            cout << count << " " << recent;
            cout << endl;
        }
    }
    return 0;
}