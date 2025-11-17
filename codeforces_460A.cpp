/*The program is the solution of codeforces problem no. 460A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 17-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, days, a, b,used,ex,left;
    cin >> n >> m;
    if (n < m)
        cout << n << endl;
    else if (n == m)
        cout << n + 1 << endl;
    else
    {
        if (n > m)
        {
            used = n;
            days = n;
            while (used >= m)
            {
                ex = used / m;
                left = used % m;
                used = ex + left;
                days = days + ex;
            }
        }

        cout << days << endl;
    }
    return 0;
}