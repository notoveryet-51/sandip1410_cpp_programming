/*The program is the solution of codeforces problem no. 1832A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 06-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t>0) {
        string s;
        cin >> s;
        int hash[26]={0};
        for (int i=0; i<s.size();i++) {
            hash[s[i]-'a']++;
        }
        int hash_count=0;
        for (int i=0; i<26; i++) {
            if (hash[i]>=2) hash_count++;
        }
        if (hash_count>=2)  cout << "YES"  << endl;
        else cout << "NO" <<endl;
        t--;
    }
    return 0;
}