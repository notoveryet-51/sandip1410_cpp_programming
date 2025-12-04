/*The program is the solution of codeforces problem no. 1857A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 04-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n,sum=0;
        cin >> n;
        int arr[n];
        for (int i=0;i<n; i++) {
            cin >> arr[i];
            sum+=arr[i];
        }
        if (sum%2==0)   cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
    return 0;
}