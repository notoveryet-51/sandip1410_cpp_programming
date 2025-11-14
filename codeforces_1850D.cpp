/*The program is the solution of codeforces problem no. 1850D
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 14-11-2025    */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n,k,count=0,maximum=INT_MIN,temp=0;
        cin >> n>> k;
        vector<int>vec(n);
        for (int j=0; j<n; j++) {
            cin >> vec[j];
        }
        sort (vec.begin(),vec.end());
        for (int j=0; j<n-1; j++) {
            if ((vec[j+1]-vec[j])<=k) {
                count++;
                if (count>maximum)  maximum=count;
            }
            else {
                if (maximum>temp)   temp=maximum;
                count=0; 
            }
        }
        cout <<n- (max(temp,maximum)+1)<<endl;
    }
    return 0;
} 