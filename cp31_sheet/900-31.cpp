#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while(t--) {
        long long n;
        cin >>n;
        long long count2=0, count3=0;
        while (n>0 && n%2==0) {
            count2++;
            n=n/2;
        }
        while (n>0 && n%3==0) {
            count3++;
            n=n/3;
        }
        if (n>1 || count2>count3) {
            cout << -1 << endl;
        }
        else {
            cout << (count3-count2) + count3 << endl;
        }
    }
    return 0;
}
