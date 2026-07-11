#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n); 
        for (auto &i : a) {
            cin >> i;
        }
        unordered_map<int, int>cnt1;
        unordered_map<int, ll>cnt2;
        int x= a[0];
        set<int>visited;
        int steps=0;
        while(!visited.count(x)) {
            cnt1[x]=1;
            cnt2[x]=steps;
            visited.insert(x);
            if (x%2!=0) x=x+1;
            else x=x/2;
            steps++;
        }
        for (int i=1; i<n; i++) {
            x=a[i]; 
            visited.clear();
            steps=0;
            while(!visited.count(x)) {
                if (cnt1.count(x)) {
                    cnt1[x]++;
                    cnt2[x]+=steps;
                }
            visited.insert(x);
            if (x%2!=0) x=x+1;
            else x=x/2;
            steps++;
            }  
        }
        ll ans=1000000000000000000;
        for (auto &[val, count] : cnt1) {
            if (count==n) {
                ans=min(ans, cnt2[val]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}