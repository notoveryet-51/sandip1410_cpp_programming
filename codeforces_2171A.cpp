/*The program is the solution of codeforces problem no. 2171A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 02-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >> n;
        if (n%2!=0) cout << "0" << endl;
        else {
            cout << (n/4)+1<< endl;
        }
        t--;
    }
    return 0;
}