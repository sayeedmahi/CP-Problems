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
	int n;
    cin >> n;
	string s1, s2;
    cin >> s1 >> s2; 
    if (n%2!=0 || s1[0]=='p' || s2[0]=='p'||s1[n-1]=='s'||s2[n-1]=='s') {
        cout <<"NO\n";
        return;
    }
    else {
        int A=0, B=0;
        bool ok =true;
        for (int i=0; i<n; i++) {
            if (s1[i]=='s' && s2[i]=='s') {
                A++;
                B++;
            }
            else if (s1[i]=='p' && s2[i]=='p') {
                if (A==0 || B==0) {
                    ok=false;
                    break;
                }
                A--;
                B--;
            }
            else {
                if (A==0) {
                    A++;
                    if (B==0) {
                        ok=false;
                        break;
                    }
                    B--;
                }
                else if (B==0) {
                    B++;
                    A--;
                }
                else if (A>B) {
                    A--;
                    B++;
                }
                else {
                    A++;
                    B--;
                }
            }
        }
        if (ok && A==0 && B==0) {
            cout <<"YES\n";
        }
        else cout <<"NO\n";
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// solve();
	int T=1;
	cin>>T;
	while(T--) {
		solve();
	}
}