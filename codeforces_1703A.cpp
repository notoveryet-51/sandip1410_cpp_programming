/*The program is the solution of codeforces problem no. 1703A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 26-11-2025    */

#include <bits\stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        string s;
        cin >> s;
        for (auto &c : s) {
            c = tolower(c);
        }
        if (s=="yes")   cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
    return 0;
}