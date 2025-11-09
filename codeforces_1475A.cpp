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
        if (n>0 && (n&(n-1))==0) cout << "NO" <<endl; // bit wise and of the given number and just its preceeding number if becomes 0 , the number is power of 2
        else cout << "YES" << endl;
    }
    return 0;
}