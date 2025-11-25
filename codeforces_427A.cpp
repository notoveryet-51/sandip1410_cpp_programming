/*The program is the solution of codeforces problem no. 427A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 25-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t,sum=0;
    cin >> t;
    int arr[t],cases=0;
    for (int i=0; i<t; i++) {
        cin >> arr[i];
        if (arr[i]<0)  cases++;
    }
    int officers=0;
    for (int i=0; i<t; i++) {
        if (arr[i]>0) {
            officers+=arr[i]; 
        }
        if (officers!=0 && arr[i]<0) {
            officers+=arr[i];
            cases--; 
        }
    }
    cout <<cases;
    return 0;
}