/*The program is the solution of codeforces problem no. 1901A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 28-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n,x;
        cin >> n>>x;
        int arr[n+1];
        int max=INT_MIN;
        arr[0]=0;
        for (int j=1; j<n+1; j++) cin >> arr[j];
        for (int j=0; j<n; j++) {
            if (arr[j+1]-arr[j]>max) max=arr[j+1]-arr[j];
        }
        if (2*(x-arr[n])>max) max=2*(x-arr[n]);
        cout << max<< endl;
    }
    return 0;
}