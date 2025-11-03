/*The program is the solution of codeforces problem no. 405A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 03-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort (arr,arr+n);
    for (int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}