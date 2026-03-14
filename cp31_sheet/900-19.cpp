#include<bits/stdc++.h>
using namespace std;

int main () {
    long long t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        long long finalpos;
        if (n%4==0) {
            finalpos = 0;
        }
        else if (n%4==1) {
            finalpos = -n;
        }
        else if (n%4==2) {
            finalpos = 1;
        }
        else {
            finalpos=n+1;
        }
        if (x%2==0) {
            finalpos=x+finalpos;
        }
        else {
            finalpos=x-finalpos;
        }
        cout << finalpos<< endl;
    }
    return 0;
}
