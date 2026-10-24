#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
void solve () {
    int x, y; cin>>x>>y;
    if(x<y) { 
        cout <<"Runner up" << endl;
        cout <<"Champion" << endl;}
    else {
        cout <<"Champion" << endl;
        cout << "Runner up" << endl; }
}
int main () {
    solve();
    return 0;
}