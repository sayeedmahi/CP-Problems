#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector <long long> p(n);
        for (int i=0; i<n; i++) {
            cin >> p[i];
        }
        int indx1=-1, indx2=-1;
        for (int i=0; i<n; i++) {
            if (p[i]!=(n-i)) {
                indx1=i;
                break;
            }
        }
        if (indx1==-1) {
            for (int i=0; i<n; i++) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
        else {
            if (indx1==0) {
            for (int i=indx1+1; i<n; i++) {
                if (p[i]==n) {
                    indx2=i;
                    break;
                }
            }
        }
        else {
            for (int i=indx1+1; i<n; i++) {
                if (p[i]==(p[indx1-1]-1)) {
                    indx2=i;
                    break;
                }
            }
        }
        for (int i=0; i<indx1; i++) {
            cout << p[i] << " ";
        }
        for (int i=indx2; i>=indx1; i--) {
            cout << p[i] << " ";
        }
        for (int i=indx2+1; i<n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
        }
    }
    return 0;
}