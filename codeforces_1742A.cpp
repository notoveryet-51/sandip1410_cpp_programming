/*The program is the solution of codeforces problem no. 1742A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 24-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int a,b,c;
        cin >>a >>b >>c;
        if (a==b+c || b==c+a|| c==a+b)  cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    return 0;
}