#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t; 
    while (t--) {
        long long int n;
        cin >> n;
        if (n<4 || n%2!=0) {
            cout << -1 << endl;
        }
        else {
            long long axle2, axle3, maximum, minimum;
            axle3=n/6;
            while (axle3>=0 && (n-(axle3*6))%4!=0) {
                axle3--;
            }
            axle2=(n-(axle3*6))/4;
            minimum= axle2+axle3;
            axle2=n/4;
            while (axle2>=0 && (n-(axle2*4))%6!=0) {
                axle2--;
            }
            axle3=(n-(axle2*4))/6;
            maximum= axle2+axle3;
            cout << minimum << " " << maximum << endl;
        }
    }
    return 0;
}