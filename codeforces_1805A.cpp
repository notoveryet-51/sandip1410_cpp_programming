/*The program is the solution of codeforces problem no. 1805A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 15-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

int sum(vector<int> vec) {
    int n=vec.size();
    int summation=0;
    for (int i=0; i<n; i++) summation^=vec[i];
    return summation;
}

void solve()  {
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto &it:v) cin >> it;
    for (int x=0; x<=255; x++) {
        vector<int>newi=v;
        for (int i=0; i<n; i++) {
            newi[i]=newi[i]^x;
        }
        int result=sum(newi);
        if (result==0)  {
            cout << x<< endl;
            return;
        }
    }
    cout<< -1<< endl;
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