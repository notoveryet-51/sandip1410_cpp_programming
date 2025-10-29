/*The program is the solution of codeforces problem no. 2167B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 28-10-2025    */


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int hash1[26] = {0};
        for (int i = 0; i < n; i++)
        {
            hash1[s[i] - 'a']++;
        }
        int hash2[26] = {0};
        for (int i = 0; i < n; i++)
        {
            hash2[t[i] - 'a']++;
        }
        // compare hashes
        int count = 0;

        for (int j = 0; j < 26; j++)
        {
            if (hash1[j] != hash2[j])
            {
                count = 1;
                break;
            }
        }

        if (count == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}


//do sort the arrays and compare....if same then yes