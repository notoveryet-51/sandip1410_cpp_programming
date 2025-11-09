#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m,k,count=0;
    cin >> n;
    cin >> m;
    cin >> k;
    vector<int>head(n);
    for (int i=0; i<n; i++) cin >> head[i];
    vector<int>body(m);
    for (int i=0; i<m; i++) cin >> body[i];
    for (int i=0; i<head.size(); i++) {
        for (int j=0; j<body.size(); j++) {
            if (head[i]<=body[j])   {
                count ++;
                head.erase(head.begin()+i);
                body.erase(body.begin()+j);
                i--;
                break;
            }
        } 
    }
    if (count==k) cout << "YES";
    else cout << "NO";
    return 0;
}