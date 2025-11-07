/*The program is the solution of codeforces problem no. 2044C
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 07-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int seated=0;
        if (m>=a) seated+=a;
        else seated+=m;
        if (m>=b) seated+=b;
        else seated+=m;
        if (seated<2*m && c>=2*m-seated) seated+=(2*m-seated);
        else if (seated<2*m && c<2*m-seated) seated+=c;
        cout << seated << endl;
    }
    return 0;
}