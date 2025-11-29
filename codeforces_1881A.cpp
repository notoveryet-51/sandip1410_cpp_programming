/*The program is the solution of codeforces problem no. 1881A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 29-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>> t;
    for (int i=0; i<t; i++) {
        int n,m;
        cin >> n>> m;
        string s1,s2;
        cin>> s1;
        cin>> s2;
        int count=0;
        if (s1.find(s2)!=string::npos) {
            cout << count<< endl;
            continue;
        }
        do {
            s1+=s1;
            count++;
            if (count>10)   {
                cout<<-1;
                goto label;
            }
        } while (s1.find(s2)==string::npos);
        cout << count ;
        label:
        cout<<endl;
    }
    return 0;
}