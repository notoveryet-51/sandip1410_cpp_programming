/*The program is the solution of codeforces problem no. 141A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 23-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    cin >> s;
    string con;
    for (int i=0; i<s1.size(); i++) {
        con.push_back(s1[i]);
    }
    for (int i=0; i<s2.size(); i++) {
        con.push_back(s2[i]);
    }
    sort (s.begin(),s.end());
    sort (con.begin(),con.end());
    if (s==con) cout << "YES";
    else cout << "NO";
    return 0;
}