/*The program is the solution of codeforces problem no. 118A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 25-10-2025    */

#include <bits/stdc++.h>

using namespace std;
int main () {
    int n,n1;
    string s1,s2="";
    cin >> s1;
    //determine size of string
    n=s1.size();
    //converting the whole string to lowercase
    for (int i=0; i<n; i++) {
        s1[i]=tolower(s1[i]);
    }
    //taking a new string with the conditions met
    for (int i=0; i<n; i++) {
        if (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='y') //'y' is treated as a vowel in this particular problem
            continue;
        else {
            s2+='.'; // only in c++ we have this feature
            s2+=s1[i];
        }
    }
    //printing the new string
    cout << s2;
    return 0;
}