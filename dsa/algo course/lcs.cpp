#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];

int lcs (string &s1, string &s2) {
    int m=s1.size();
    int n=s2.size();
    memset(dp, 0, sizeof (dp));
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            if (s1[i-1]==s2[j-1]) {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else {
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main () {
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2)) {
        cout << lcs(s1,s2)<<endl;
    }
}
