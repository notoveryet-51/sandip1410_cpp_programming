/*The program is the solution of codeforces problem no. 1475B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 13-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int test;
    cin >> test;
    for (int i=0; i<test; i++) {
        int n;
        cin >> n;
        if (n%2020==0 || n%2021==0) {
            cout << "YES"<<endl;
        }
        else if (n%2020!=0 && n%2021!=0) {
            while (n>0 && n%2020!=0) {
                n-=2021;
            }
            if (n<2020) cout <<"NO"<<endl;
            else cout <<"YES"<<endl;
        }
    }
    return 0;
}