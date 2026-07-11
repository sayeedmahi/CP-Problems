#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int left2s=0, rightOdds=0; 
        for (char c: s) {
            if (c=='1' || c=='3') rightOdds++;
        }
        int best=0;
        for (char c: s) {
            best=max(best, left2s+rightOdds);            
            if (c=='2') left2s++;
            else if (c=='1' || c=='3') rightOdds--;
        }
        best=max(best, left2s+rightOdds);
        cout << s.size() -best << endl;
    }
    return 0;
}