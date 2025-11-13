/*The program is the solution of codeforces problem no. 139A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 26-10-2025    */

#include <bits/stdc++.h>

using namespace std;
int main () {
    int n,count=0,sum=0,j=0;
    cin >>n;
    vector <int> vec(7);
    for (int i=0; i<7; i++)
        cin >> vec[i];
    while (sum<n) {
        sum+=vec[j];
        count ++;
        j++;
        if (j==7)
            j=0;
    }
    int final_answer=count %7;
    if (final_answer==0)
        cout << 7;
    else cout << final_answer;
    return 0;
}
