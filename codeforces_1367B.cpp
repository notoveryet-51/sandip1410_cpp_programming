/*The program is the solution of codeforces problem no. 1367B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 11-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

void solve()  {
    int n;
    cin >> n;
    vector <int> vec(n);
    for (auto &it:vec) cin >> it;
    int misplaced_odd=0;
    int misplaced_even=0;
    for (int i=0; i<n; i++) {
        if (vec[i]%2==0 && i%2!=0)  misplaced_odd++;
        else if (vec[i]%2!=0 && i%2==0) misplaced_even++;
    }
    if (misplaced_even==misplaced_odd)  cout << misplaced_even<< endl;
    else cout << -1<< endl;
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