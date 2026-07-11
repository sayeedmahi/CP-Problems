#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, M;
    cin >> N >> K >> M;

    unordered_map<int, vector<long long>> mp;

    for (int i = 0; i < N; i++) {
        int c; long long v;
        cin >> c >> v;
        mp[c].push_back(v);
    }

    vector<long long> top, tail;

    for (auto &p : mp) {
        auto &v = p.second;
        sort(v.rbegin(), v.rend());
        top.push_back(v[0]);
        for (int i = 1; i < (int)v.size(); i++) {
            tail.push_back(v[i]);
        }
    }

    sort(top.rbegin(), top.rend());

    // mark M best representatives
    for (int i = M; i < (int)top.size(); i++) {
        tail.push_back(top[i]);
    }

    sort(tail.rbegin(), tail.rend());

    long long ans = 0;

    // take M best representatives
    for (int i = 0; i < M; i++) {
        ans += top[i];
    }

    // take remaining K - M best from tail
    for (int i = 0; i < K - M; i++) {
        ans += tail[i];
    }

    cout << ans << "\n";
}