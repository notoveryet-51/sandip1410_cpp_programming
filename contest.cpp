#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        cin >> n;
        int arr [n];
        for (int j=0; j<n; j++) {
            cin >> arr[j];
        }
        vector <int> vec;
        for (int j=0; j<n; j++) {
            
            for (int k=j+1; k<n; k++) {
                int a=arr[k]%arr[j];
                if (a%2==0){
                    vec.push_back(arr[j]);
                    vec.push_back(arr[k]);
                    goto next;
                }
            }
        }
        cout << "-1" << endl;  
        continue; // to skip printing if pair not found as goto works in default too
        next:
        for (int j=0; j<vec.size(); j++) cout << vec[j] << " ";
        cout << "\n";
    }
    return 0;
}