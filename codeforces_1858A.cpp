/*The program is the solution of codeforces problem no.
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 03-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int a,b,c;
        cin >>a>>b>>c;
        if (a > b || (a == b && (c % 2 == 1)))
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}