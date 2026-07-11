#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long double l[n];
    for (int i=0; i<n; i++) {
        cin >> l[i];
    }
    long double pointer= 0.5; 
    ll count=0;
    for (int i=0; i<n; i++) {
        long double pointer2=pointer;
        if (pointer>0) {
            pointer=pointer-l[i];
        }
        else if (pointer<0) {
            pointer=pointer+l[i];
        }
        if ((pointer>0 && pointer2<0) || (pointer<0 && pointer2>0)) count++;
    }
    cout << count;
    return 0;
}