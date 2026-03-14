#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count2=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]==2) count2++;
        }
        int target=count2/2;
        if (count2==0) cout << "1\n";
        else if (count2%2!=0) cout << "-1\n";
        else {
            int count =0;
            int k=-1;
            for (int i = 0; i < n; i++) {
                if (a[i]==2) count++;
                if (count==target) {
                    k=i+1;
                    break;
                }
            }
            cout << k << "\n";
        }
    }
}