/*The program is the solution of codeforces problem no. 158A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 04-12-2025    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,count=0;
    cin >> n>>k;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<n;) {
        if (arr[i]==0)
           i++; 
        else if (arr[i]>=arr[k-1])
            count++;
            i++;
    }
    cout<<count<<endl;
}