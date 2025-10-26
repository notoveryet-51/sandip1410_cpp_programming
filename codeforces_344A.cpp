/*The program is the solution of codeforces problem no. 344A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 26-10-2025    */

#include <bits/stdc++.h>

using namespace std;
int main () {
    int magnet,count=1;
    cin >> magnet;
    vector <int> vec(magnet);
    for (int i=0; i<magnet; i++) {
        cin >> vec[i];
    }
    for (int i=0; i<magnet-1; i++) {
        if (vec[i]!=vec[i+1])
            count++;
    }
    
    cout << count;
    return 0;
}