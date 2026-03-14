#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        map<long long, long long>freq;
        for (int i=0; i<n; i++) {
            freq[a[i]]++;
        }
        long long highest = 0;
        for (auto i: freq) {
            highest=max(highest, i.second);
        }
        long long operations=0;
        long long rem=n-operations;
        while (highest<n) {
            operations++;
            if (highest<=rem) {
                operations= operations+highest;
                highest=highest*2;
            }
            else {
                operations=operations+(n-highest);
                highest=n;
            }
        }
        
    }
    return 0;
}
