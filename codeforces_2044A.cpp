/*The program is the solution of codeforces problem no. 2044A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 06-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n,count =0;
        cin >> n;
        for (int j=1; j<n; j++) {
            for (int k=1; k<n; k++) {
                if (j+k==n) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}