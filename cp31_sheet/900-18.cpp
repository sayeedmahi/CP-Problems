#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        int pos=0;
        long long A= 2*b - c;
        if (A>0 && A%a==0) {
            pos=1;
        }
        long long B = (a+c)/2;
        if ((a+c)%2==0 && B%b==0) {
            pos=1;
        }
        long long C= 2*b - a;
        if (C>0 && C%c==0) {
            pos=1;
        }
        if (pos==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
