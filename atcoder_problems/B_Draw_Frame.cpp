#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w;
    cin >> h >> w;
    char a[h][w];
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (i==0 || i==h-1 || j==0 || j==w-1) a[i][j]='#';
            else a[i][j]='.';
        }
    }
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}