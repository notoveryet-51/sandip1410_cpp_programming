/*The program is the solution of codeforces problem no. 1714E
Regn no.: 2025CA085
Program Date: 18-12-2025    */

/**
 *  ███████╗ █████╗ ███╗   ██╗██████╗ ██╗██████╗  █████╗ ███╗   ██╗
 *  ██╔════╝██╔══██╗████╗  ██║██╔══██╗██║██╔══██╗██╔══██╗████╗  ██║
 *  ███████╗███████║██╔██╗ ██║██║  ██║██║██████╔╝███████║██╔██╗ ██║
 *  ╚════██║██╔══██║██║╚██╗██║██║  ██║██║██╔═══╝ ██╔══██║██║╚██╗██║
 *  ███████║██║  ██║██║ ╚████║██████╔╝██║██║     ██║  ██║██║ ╚████║
 *  ╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝╚═╝     ╚═╝  ╚═╝╚═╝  ╚═══╝
 *
 *                 S A N D I P A N   R A Y
 */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

void solve()  {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool has_fixed = false;   
    bool has_cycle = false;   
    for (int i = 0; i < n; i++) {
        if (arr[i] % 10 == 0 || arr[i] % 10 == 5)
            has_fixed = true;
        else
            has_cycle = true;
    }
    if (has_fixed && has_cycle) {
        no;
        return;
    }
    if (has_fixed) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 10 == 5)
                arr[i] += 5;
        }

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[0]) {
                no;
                return;
            }
        }
        yes;
    }
    else {
        for (int i = 0; i < n; i++) {
            while (arr[i] % 10 != 2) {
                arr[i] += arr[i] % 10;
            }
        }

        for (int i = 1; i < n; i++) {
            if ((arr[i] - arr[0]) % 20 != 0) {
                no;
                return;
            }
        }
        yes;
    }
}

int main()  {
    ll t;
    cin >> t;
    while(t--)  {
        solve();
    }
    return 0;
}