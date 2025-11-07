/*The program is the solution of codeforces problem no. 2044B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 07-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int j=0; j<t; j++) {
        string s;
        cin >> s;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='p') s[i]='q';
            else if (s[i]=='q')  s[i]='p';
        }
        for (int i=s.size()-1;i>=0;i--) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}