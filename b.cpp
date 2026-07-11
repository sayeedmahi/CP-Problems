#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int org= n;
    string s;
    int temp =n;
    while (temp) s.push_back('0' + (temp & 1)), temp >>= 1;
    reverse(s.begin(), s.end());
    int ans=s[0]-'0';
    for (int i=1; i<s.size(); i++) {
        ans=ans^(s[i]-'0');
    }
    if (ans) cout << 0 << endl;
    else {
        bool ok=false;
        int i=1;
        while (ok==false) {
            int OR = org | i;
            string s2;
            int temp2=OR;
            while (temp2) s2.push_back('0' + (temp2 & 1)), temp2 >>= 1;
            reverse(s2.begin(), s2.end());
            int ans2=s2[0]-'0';
            for (int j=1; j<s2.size(); j++) {
                ans2=ans2^(s2[j]-'0');
            }
            if (ans2) {
                ok=true;
                break;
            }
            else i++;
        }
        cout << i << endl;
    }

    return 0;
}