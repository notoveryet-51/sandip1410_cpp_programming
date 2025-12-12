/*The program is the solution of codeforces problem no. 1343B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 12-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

void solve()  {
    int n;
    cin >> n;
    if ((n/2)%2!=0) no;
    else {
        int even_sum=0;
        int odd_sum=0;
        yes;
        for (int i=1; i<=n; i=i+2) {
            cout << i+1 << " ";
            even_sum+=i+1;
        }
        cout << endl;
        for (int i=1; i<(n/2-1)*2+1; i=i+2) {
            cout << i << " ";
            odd_sum+=i;
        }
        cout<< even_sum-odd_sum;
        cout << endl;
    }
}

int main()  {
    ll t;
    cin >> t;
    while(t>0)  {
        solve();
        t--;
    }
    return 0;
}