/*The program is the solution of codeforces problem no. 2044A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 09-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int flag=0;
        long long n;
        cin >> n;
        if (n>0 && (n&(n-1))==0) cout << "NO" <<endl; //
        else cout << "YES" << endl;
    }
    return 0;
}