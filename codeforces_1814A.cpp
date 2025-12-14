/*The program is the solution of codeforces problem no. 1814A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 13-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

void solve()  {
    ll n,k;
    cin >> n>> k;
    if (k>n && n%2!=0) no;
    else if (n%2==0 || (n-k)%2==0) yes;
    else no;
}

int main()  {
    ll t;
    cin >> t;
    while(t>0)  {
        solve();
        t--;
    }
    return 0;
}