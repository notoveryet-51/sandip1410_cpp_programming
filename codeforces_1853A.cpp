/*The program is the solution of codeforces problem no. 1853A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 05-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>> t;
    while (t>0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0;i<n; i++)  cin>>arr[i];
        int min_dif=INT_MAX;
        for (int i=0; i<n-1; i++) {
            int dif=arr[i+1]-arr[i];
            if (dif<0) {
                cout << 0<< endl;
                goto label;
            }
            min_dif=min(min_dif,dif);
        }
        cout << min_dif/2 +1 <<endl;
        label:
        t--;
    }
    return 0;
}