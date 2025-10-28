/*The program is the solution of codeforces problem no. 61A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 27-10-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    string str1,str2;
    cin >> str1 >> str2;
    for (int i=0; i<str1.size(); i++) {
        int stringInt1= str1[i]-'\0'; //converting the string to integers
        int stringInt2= str2[i]-'\0';
        cout << (stringInt1 ^ stringInt2); // bitwise xor operator
    }
    return 0;
}