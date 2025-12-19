/*The program is the solution of codeforces problem no. 1703C
Regn no.: 2025CA085
Program Date: 19-12-2025    */

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
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n; i++) {
        int n1;
        string s;
        cin >> n1>> s;
        for (int k=0; k<n1; k++) {
            if (s[k] == 'D') {
                arr[i] += 1;
                if (arr[i] == 10) arr[i] = 0;
            }
            else {
                arr[i] -= 1;
                if (arr[i] < 0) arr[i] = 9;
            }
        }
    }
    for (int i=0; i<n; i++)  cout << arr[i]<< " ";
}

int main()  {
    ll t;
    cin >> t;
    while(t--)  {
        solve();
        cout<<endl;
    }
    return 0;
}