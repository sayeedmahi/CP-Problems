#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t; 
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int ans = 0, ind1=-1, ind2=-1;
        for (int i=0; i<n; i++) {
            if (a[i]!=0) {
                ans=1;
                ind1=i;
                break;
            }
        }
        for (int i=ind1; i<n; i++) {
            if (a[i]==0) {
                ind2=i;
                break;
            }
        }
        if (ind2!=-1) {
            for (int i=ind2; i<n; i++) {
                if (a[i]!=0) {
                    ans=2;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}