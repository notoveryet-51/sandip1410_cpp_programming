/*The program is the solution of codeforces problem no. 443A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 21-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin,s);
    set<int>st;
    for (int i=0; i<s.size(); i++) {
        if (s[i]!='{' && s[i]!='}' && s[i]!=' ' && s[i]!=',')    st.insert(s[i]);
    }
    cout << st.size() << endl;
    return 0;
}