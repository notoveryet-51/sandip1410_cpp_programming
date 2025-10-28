/*The program is the solution of codeforces problem no. 705A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 28-10-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    string s1 = "I hate";
    string s2 = "I love";
    string s3 = "that";
    string s4 = "it";

    cout << s1;
    n--;

    int i = 1; // to maintain a even odd sequence

    while (n > 0) {
        cout << " " << s3 << " ";
        if (i % 2 == 1)
            cout << s2;
        else
            cout << s1;
        i++;
        n--;
    }

    cout << " " << s4;
    return 0;
}
