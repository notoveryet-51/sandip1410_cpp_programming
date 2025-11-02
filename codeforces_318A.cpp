/*The program is the solution of codeforces problem no. 318A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 02-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, k;
    cin >> n >> k;
    long long oddCount = (n + 1) / 2; // number of odd numbers
    
    if (k <= oddCount)
        cout << 2 * k - 1; 
    else
        cout << 2 * (k - oddCount); 
        
    return 0;
}
