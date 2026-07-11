#include <bits/stdc++.h>
using namespace std;

int countRecur (vector<int>&coins, int n, int sum){
    if (sum==0) return 1;
    if (sum<0 || n==0) return 0;
    int include=countRecur(coins, n, sum-coins[n-1]);
    int exclude=countRecur(coins, n-1 , sum);
    return include+exclude;
}

int countWays(vector<int>&coins , int sum){
    int n=coins.size();
    return countRecur(coins, n, sum);
}

int main () {
    vector<int>coins={2, 5, 3, 6};
    int sum=10;
    cout << countWays(coins, sum) << endl;
    return 0;
}