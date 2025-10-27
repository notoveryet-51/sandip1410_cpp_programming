/*The program is the solution of codeforces problem no. 486A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 27-10-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n,fn;
    cin >> n;
    if (n%2==0) 
        fn=n/2;
    else fn=-(n+1)/2;
    cout << fn << endl;
    return 0;
}