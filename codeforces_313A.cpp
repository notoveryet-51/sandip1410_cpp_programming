/*The program is the solution of codeforces problem no. 282A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 10-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n>0) cout << n;
    else 
    {
        n=-n;
        int last_digit=n%10;
        int second_last=(n%100-last_digit)/10;
        if (second_last<last_digit) n=n/10;
        else {
            int rem=n%10;
            n/=10;
            n-=n%10;
            n+=rem;
        }
        n=-n;
        cout << n;
    }
    return 0;
}