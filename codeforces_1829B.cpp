/*The program is the solution of codeforces problem no. 1829B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 10-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

void solve()  {
    int n;
    cin>>n;
    vector <int> v(n);
    for (auto &it:v) cin>>it;
    int zero_count=0;int maxi=INT_MIN;
    for (int i=0;i<n;i++) {
        if (v[i]==0)    zero_count++;
        else zero_count=0;
        maxi=max(maxi,zero_count);
    }
    cout<< maxi << endl;
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