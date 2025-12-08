/*The program is the solution of codeforces problem no. 1834B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 08-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n];
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += llabs(a[i]);
        }
        // Count negative segments
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                count++;
                while (i < n && a[i] <= 0)
                    i++;
            }
        }
        cout << sum << " " << count << endl;
    }
}