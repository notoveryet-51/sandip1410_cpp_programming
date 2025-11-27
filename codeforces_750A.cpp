/*The program is the solution of codeforces problem no. 750A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 27-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int prblm, time;
    cin >> prblm >> time;
    int total_time = 240 - time;
    int sum=0;
    for (int i=1; i<=prblm; i++) {
        sum += i*5;
        if (sum > total_time) {
            cout << i-1 << endl;
            return 0;
        }
    }
    cout << prblm << endl;
    return 0;
}