/*The program is the solution of codeforces problem no. 580A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 05-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,count=1,hold=1;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n-1; i++) {
        if (arr[i]<=arr[i+1]) {
            count ++;
            if (count>hold) hold=count;
        }
        else count=1;
    }
    cout << hold << endl;
    return 0;
}