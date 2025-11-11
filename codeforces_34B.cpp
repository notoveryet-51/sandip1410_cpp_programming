/*The program is the solution of codeforces problem no. 34B
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 11-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n , m;
    cin >> n >>m;
    int arr[n];
    int sum=0;
    for (int i=0; i<n; i++) cin >> arr[i];
    vector<int>s;
    for (int i=0; i<n; i++) {
        if (arr[i]<0)   s.push_back(arr[i]);
    }
    int vec_length=s.size();
    sort (s.begin(),s.end());
    int j=0;
    while (m>0 && vec_length>0) {
        sum+=s[j];
        m--;
        vec_length--;
        j++;
    }
    cout << -sum<< endl;
    return 0;
}