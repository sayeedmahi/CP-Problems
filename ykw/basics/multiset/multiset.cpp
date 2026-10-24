#include <bits/stdc++.h>
using namespace std;


void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    multiset<int>ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(8);
    ms.insert(3);
    ms.insert(1);
    ms.insert(1);
    cout << *ms.begin() << endl; //smallest
    cout << *ms.rbegin() << endl; //largest
    auto it=prev(ms.end()); //largest
    cout << *it << endl;
    cout << ms.size() << endl;
    ms.erase(1); //remove all occurences
    auto it2=ms.find(5);
    ms.erase(it2); // remove just one occurence
    cout << ms.end();

}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}