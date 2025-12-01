/*The program is the solution of codeforces problem no. 1866A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 01-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n; i++) {
        if (arr[i]<0)   arr[i]=-arr[i];
    }
    sort (arr,arr+n);
    cout << arr[0];
    return 0;
}
