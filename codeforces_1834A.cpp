/*The program is the solution of codeforces problem no. 1834A 
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 07-12-2025
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >> n;
        int val;
        int negative_count = 0;
        int sum = 0;
        for (int i=0; i<n; i++) {
            cin >> val;
            if (val < 0) negative_count++;
            sum += val;
        }
        int flips = 0;
        if (sum < 0) {
            flips = (-sum + 1) / 2;
        }
        negative_count -= flips;
        if (negative_count % 2 != 0)
            flips++;
        cout << flips << endl;
        t--;
    }
    return 0;
}

