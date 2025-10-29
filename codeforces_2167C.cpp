/*The program is the solution of codeforces problem no. 2167C
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 28-10-2025    */


#include <bits/stdc++.h>
using namespace std;

int main () {
    int test;
    cin >> test;
    for (int i=0; i<test; i++) {
        int n,even=0,odd=0;
        cin >> n;
        int arr[n],arr1[n];
        for (int j=0; j<n; j++)
            cin >> arr[j];
        for (int j=0;j<n;j++)
            arr1[j]=arr[j];
        sort (arr, arr+n);
        for (int j=0; j<n; j++) {
            if (arr1[j]%2==0)
                even++;
            else odd++;
        }
        if (even>0 && odd>0) {
            for (int j=0; j<n; j++)
                cout<<arr[j]<<" ";
        
        }
        else {
            for (int j=0; j<n; j++)
                cout<<arr1[j]<<" ";
        }
        cout <<endl;
    }

    return 0;
}