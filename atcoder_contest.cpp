#include <bits/stdc++.h>
using namespace std;

int main () {
    int x;
    cin >> x;
    int n;
    cin >> n;
    int weight[n];
    for (int i=0; i<n; i++) cin >> weight[i];
    int q;
    cin >> q;
    unordered_set<int> enter;
    for (int i=0; i<q; i++) {
        int query;
        cin >> query;
        query--; //for index checking
        if (enter.count(query)) { // checks whether query exists
            x -= weight[query];
            enter.erase(query); // acts like the query is never inserted
        } else { // adds to unordered_set if its unique
            x += weight[query];
            enter.insert(query);
        }
        cout << x << endl;
    }
    
    return 0;
}