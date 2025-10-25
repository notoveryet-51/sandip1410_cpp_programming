/*The program is the solution of codeforces problem no. 1300B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 25-10-2025    */

#include <bits/stdc++.h>

using namespace std;
int main () {
    int test_cases,difference,n;
    cin >> test_cases;
    for (int i=0; i<test_cases; i++) {
        cin >> n;
        vector <int> vec(2*n);
        for (int i=0; i<2*n; i++) {
            cin >> vec[i];
        }
        sort (vec.begin(),vec.end());
        difference= vec[n]-vec[n-1];
        cout << difference << endl;
    }
    return 0;
}