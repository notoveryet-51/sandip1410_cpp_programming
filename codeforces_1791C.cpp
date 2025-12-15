/*The program is the solution of codeforces problem no. 1791C
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 15-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

void solve()  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    while (s.size()>0 && s.front()!=s.back()) {
        s.erase(s.begin());
        s.pop_back();
    }
    cout << s.size()<< endl;
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