#include <bits/stdc++.h>
using namespace std;

int countRecur (vector<int>&coins, int n, int sum, vector<vector<int>>& dp){
    if (sum==0) return 1;
    if (sum<0 || n==0) return 0;
    if (dp[n-1][sum]!=-1) {
        return dp[n-1][sum];
    }
    int include=countRecur(coins, n, sum-coins[n-1],dp);
    int exclude=countRecur(coins, n-1 , sum, dp);
    return dp[n-1][sum]=include+exclude;
}

int countWays(vector<int>&coins , int sum){
    int n=coins.size();
    vector<vector<int>>dp(n, vector<int>(sum+1, -1));
    return countRecur(coins, n, sum, dp);
}

int main () {
    vector<int>coins={2, 5, 3, 6};
    int sum=10;
    cout << countWays(coins, sum) << endl;
    return 0;
}