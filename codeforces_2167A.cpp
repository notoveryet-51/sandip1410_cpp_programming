/*The program is the solution of codeforces problem no. 2167A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 28-10-2025    */


#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int arr[4],count=0;
        for (int j=0; j<4; j++) {
            cin >> arr[j];
        }
        for (int j=0; j<3; j++) {
            if (arr[j]==arr[j+1]) count++;
            else {
                count=0;
                break;
            }
        }
        if (count==0) cout << "NO" << endl;
        else cout << "YES" << endl;  
    }
    return 0;
}