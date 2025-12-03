/*The program is the solution of codeforces problem no.
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 03-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, m, a;
    cin>>n>>m>>a;
    long long flag1,flag2;
    if (n%a!=0) flag1=n/a+1;
    else flag1=n/a;
    if (m%a!=0) flag2=m/a+1;
    else flag2=m/a;
    cout<<flag1*flag2;
    return 0;
}