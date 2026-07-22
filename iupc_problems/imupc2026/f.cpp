#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using vi=vector<int>;
using vl=vector<ll>;
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define pb push_back
#define ft first
#define sd second
#define bug(a) cout<<#a <<" : " << a<< endl;
#define bug2(a,b) cout << #a << " : " << a<<" "<<#b<<" : "<<b<<endl;


void solve() {
	int n,q; cin >> n >> q;
	vi arr(n);
	map<int,int> v;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		v.insert({arr[i], i+1});
	}
	vector<pair<int,int>> v__;
	for(auto i : v) {
		v__.pb({i.ft,i.sd});
	}
	int mx=v__[0].sd;
	for(int i=1; i<v__.size(); i++) {
		mx=max(mx,v__[i].sd);
		v__[i].sd=mx;
	}
	int stop=v__.size();;
	for(int i=0; i<v__.size(); i++) {
		if(v__[i].ft!=(i+1)) {
			stop=i;
			break;
		}
	}
	while(q--) {
		int x; cin >> x; 	
		if (x>stop || x>v__.size()) cout << -1 << endl;	
        else cout << v__[x-1].second << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	// int T=1;
	// cin>>T;
	// while(T--) {
	// 	solve();
	// }
}