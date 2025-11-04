/*The program is the solution of codeforces problem no. 208A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 03-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    string s1,s2;
    cin >> s1;
    for (int i=0; i<s1.size(); i++) {
        if (i+2<s1.size() && s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B') { //boundary check else i+2 would go out of range
                if (!s2.empty() && s2.back() != ' ') //eliminating extra spaces
                    s2.push_back(' ');
                i=i+2;
        }
        else {
            s2.push_back(s1[i]);
        }
    }
    //also to avoid cases like WUBWUB where the string must remain empty, we're not doing just a pop back, we're checking 
    if (!s2.empty() && s2.back() == ' ') // eliminating spaces at the back
        s2.pop_back();
    cout << s2;
    return 0;
}