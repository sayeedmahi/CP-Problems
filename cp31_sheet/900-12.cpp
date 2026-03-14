#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int maximum= a[n-1]-a[0];
        for (int i=1; i<n; i++) {
            maximum= max(maximum, a[i]-a[0]);
        }
        for (int i=0; i<n-1; i++) {
            maximum= max(maximum, a[n-1]-a[i]);
        }
        for (int i=0; i<n-1; i++) {
            maximum= max(maximum, a[i]-a[i+1]);
        }
        cout << maximum << endl;
    }
    return 0;
}