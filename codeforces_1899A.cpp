/*The program is the solution of codeforces problem no. 1899A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 29-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        cin >> n;
        if (n%3==0) cout << "Second" << endl;
        else cout << "First" << endl;
    }
    return 0;
}