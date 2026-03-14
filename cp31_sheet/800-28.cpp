// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int min=a[0], max=a[n-1];
        if (min==max) cout << "NO\n";
        else {
            cout << "YES\n";
            a.pop_back();
            cout << max << " ";
            for (auto x: a) cout << x<< " ";
            cout << "\n";
        }
    }     
        
}