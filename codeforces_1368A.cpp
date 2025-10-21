/*The program is the solution of codeforces problem no. 1368A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 21-10-2025    */


#include <iostream>
using namespace std;

int main()
{
    int count, t;
    cin >> t;
    long long a, b, n;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> n;
        count = 0;
        while (a <= n && b <= n)
        {
            if (a > b)
            {
                b += a;
            }
            else
            {
                a += b;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}