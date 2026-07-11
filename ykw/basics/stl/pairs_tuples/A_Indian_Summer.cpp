#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<pair<string, string>> s;
    for (int i=0; i<n; i++) {
        string a, b;
        cin >> a >> b;
        s.insert({a, b});
    } 
    cout << s.size() << endl;
    return 0;
}
    /*
    USING VECTOR:
    vector<pair<<string, string>>v(n);
    for (int i=0; i<n; i++) {
        string a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int count=1;
    for (int i=1; i<n; i++) {
        if (v[i]!=v[i-1]) {
            count++;
        }    
    }
    cout << count << endl;
    */
    
    /*
    USING VECTOR (USING UNIQUE()):
    vector<pair<<string, string>>v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v,begin(), v.end()), v.end());
    cout << v.size() << endl;
    */
