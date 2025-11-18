/*The program is the solution of codeforces problem no. 469A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 18-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int p;
    set<int>s;
    cin >> p;
    for (int i=0; i<p; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    if (s.size()==n)    cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!"<<endl;    
    return 0;
}