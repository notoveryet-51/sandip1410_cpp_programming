/*The program is the solution of codeforces problem no. 486A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 27-10-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    double x, sum=0.0;
    for (int i=0; i<n; i++) {
        cin >> x;
        x/=100;
        sum+=x;
    }
    cout << sum/n*100 << endl;
    return 0;
}