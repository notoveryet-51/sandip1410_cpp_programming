/*The program is the solution of codeforces problem no. 228A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 27-10-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[4],count=0;
    for (int n=0; n<4; n++) cin >> arr[n];
    sort(arr,arr+4);
    for (int i=0; i<3; i++) {
        if (arr[i]==arr[i+1])
            count++;
    }
    cout << count;
    return 0;
}