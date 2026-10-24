#include <bits/stdc++.h>
using namespace std;

int dp[100][100];

int knapsack_01(int n, int W, vector<int>& profit, vector<int>& wt) {
    if (n==0 || W==0) return 0;
    if (dp[n][W]!=-1) return dp[n][W];
    if (wt[n-1]>W) {
        return dp[n][W]=knapsack_01(n-1, W, profit, wt);
    }
    return dp[n][W]=max(
        knapsack_01(n-1, W, profit, wt),
        profit[n-1]+knapsack_01(n-1, W-wt[n-1], profit, wt)
        );
}

int main() {
    vector<int>profit={1,7,11};
    vector<int>wt={1,2,3};
    int W=5;
    int n=profit.size();
    memset(dp, -1 , sizeof(dp));
    cout<< knapsack_01(n, W, profit, wt)<< endl;
}
