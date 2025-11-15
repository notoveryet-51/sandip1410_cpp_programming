/*The program is the solution of codeforces problem no. 474A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 15-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl;";
    string row3 = "zxcvbnm,./";
    string given;
    cin >> given;
    if (ch == 'R')
    {
        for (int i = 0; i < given.size(); i++)
        {
            for (int j = 0; j < row1.size(); j++)
            {
                if (given[i] == row1[j])
                {
                    given[i] = row1[j - 1];
                    break;
                }
            }
            for (int j = 0; j < row2.size(); j++)
            {
                if (given[i] == row2[j])
                {
                    given[i] = row2[j - 1];
                    break;
                }
            }
            for (int j = 0; j < row3.size(); j++)
            {
                if (given[i] == row3[j])
                {
                    given[i] = row3[j - 1];
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < given.size(); i++)
        {
            for (int j = 0; j < row1.size(); j++)
            {
                if (given[i] == row1[j])
                {
                    given[i] = row1[j + 1];
                    break;
                }
            }
            for (int j = 0; j < row2.size(); j++)
            {
                if (given[i] == row2[j])
                {
                    given[i] = row2[j + 1];
                    break;
                }
            }
            for (int j = 0; j < row3.size(); j++)
            {
                if (given[i] == row3[j])
                {
                    given[i] = row3[j + 1];
                    break;
                }
            }
        }
    }
    cout << given << endl;
    return 0;
}