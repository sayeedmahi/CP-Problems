#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        int n1 = s.size(), n2=t.size();
        vector <int> freq_t(26, 0);
        for (int i=0; i<n2; i++) {
            freq_t[t[i]-'A']++;
        }
        for (int i=n1-1; i>=0; i--) {
            if (freq_t[s[i]-'A']>0) {
                freq_t[s[i]-'A']--;
            }
            else {
                s[i]= 'X';
            }
        }
        int done = 1;
        for (int i=0; i<26; i++) {
            if (freq_t[i]!=0) {
                done=0;
                break;
            }
        }
        if (done==0) cout << "NO" << endl;
        else {
            string final = "";
            for (int i=0; i<n1; i++) {
                if (s[i]!='X') final=final+s[i];
            }
            if (final==t) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     while (n--) {
//         string s, t;
//         cin >> s >> t;
//         int n1 = s.size(), n2=t.size();
//         vector <int> freq_t(26, 0);
//         for (int i=0; i<n2; i++) {
//             freq_t[t[i]-'A']++;
//         }
//         for (int i=n1-1; i>=0; i--) {
//             if (freq_t[s[i]-'A']>0) {
//                 freq_t[s[i]-'A']--;
//             }
//             else {
//                 s[i]= 'X';
//             }
//         }
//         string final = "";
//         for (int i=0; i<n1; i++) {
//             if (s[i]!='X') final=final+s[i];
//         }
//         if (final==t) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }
