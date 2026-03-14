#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            if (arr[i]>=a) arr[i]= a-1;
        }
        long long int ans=b;
        for (int i=0; i<n; i++) {
            ans=ans+arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}