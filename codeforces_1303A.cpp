/*The program is the solution of codeforces problem no. 1303A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 08-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int count=0;
        string s;
        cin >> s;
        int i1=-1,i2=-1;//can't initialise 0 as it's a string index

        // starting index of '1'
        for (int j=0; j<s.size(); j++) {
            if (s[j]=='1') {
                i1=j;
                break;
            }
        }

        // ending index of '1'
        for (int j=s.size()-1; j>=0; j--) {
            if (s[j]=='1') {
                i2=j;
                break;
            }
        }

        // only 0/1 string case 
        if (i1 == -1 || i1 == i2) {
            cout << 0 << endl;
            continue;
        }
        
        // no of 0's between the starting and ending index
        for (int j=i1; j<=i2; j++) {
            if (s[j]=='0') count++;
        }
        cout << count << endl;
    }
    return 0;
}