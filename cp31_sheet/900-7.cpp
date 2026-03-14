#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t; 
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int current=1, best=1;
        for (int i=0; i<n-1; i++) {
            if ((a[i+1]-a[i])<=k) current++;
            else {
                if (current>=best) best=current;
                current=1;
            }
        }
        if (current>=best) best=current;
        cout << n-best << endl;
    }
    return 0;
}