/*The program is the solution of codeforces problem no. 1878A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 30-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int j=0; j<n; j++) cin >>arr[j];
        for (int j=0; j<n; j++) {
            if (arr[j]==k) {
                cout << "YES";
                goto label;
            }
        }
        cout << "NO";
        label:
        cout << endl;
    }
    return 0;
}