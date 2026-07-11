#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string>s(n);
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    for (int i=0; i<n; i++) {
        string S=s[i];
        reverse(S.begin(), S.end());
        if (S==s[i]) {
            int sz=s[i].size();
            while (sz--) {
                cout << s[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "Fool " <<  s[i] << "!" << endl;
        }
    }


    return 0;
}