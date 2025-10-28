/*The program is the solution of codeforces problem no. 2145A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 28-10-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int test;
    cin >> test;
    for (int i=0; i<test; i++) {
        int n;
        cin >> n;
        int rem=n%3;
        if (rem==0)
            cout << "0" << endl;
        else cout << 3-rem << endl;
    }
    return 0;
}