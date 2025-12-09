/*The program is the solution of codeforces problem no. 1828B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 09-12-2025    */


#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

void solve()  {
    int n;
    cin >> n;
    vector <int> vec(n);
    for (int i=0; i<n; i++) cin >> vec[i];
    int g=0;
    for (int i=0; i<n; i++) {
        int difference=abs(vec[i]-(i+1));
        if (difference==0) continue;
        g=findGCD(g,difference);
    }
    cout << g;
}

int main()  {
    ll t;
    cin >> t;
    while(t>0)  {
        solve();
        cout<<endl;
        t--;
    }
    return 0;
}