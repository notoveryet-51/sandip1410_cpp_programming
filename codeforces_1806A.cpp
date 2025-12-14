/*The program is the solution of codeforces problem no. 1806A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 14-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll count = 0;
    if (a == c && b == d)
    {
        cout << 0 << endl;
        return;
    }
    else if (b > d)
    {
        cout << -1 << endl;
        return;
    }
    else    {
        count = d - b;
        a += count;
        if (a < c)
        {
            cout << -1 << endl;
            return;
        }
        count += (a - c);
    }
    cout << count << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}