/*Print the most frequent character from a string using O(nlogn) time complexity
Date: 16-11-2025
Regn No.: 2025CA085
Name: Sandipan Ray  */

#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int a=s.size();
    set<char> st;
    for(int i=0;i<a;i++){
        st.insert(s[i]);
    }
    vector<char> v(st.begin(), st.end()); //sorted unique character vector
    vector<int> count(v.size(), 0); // frequency count vector
    int j=0;
    sort (s.begin(), s.end()); // sorting the string
    for (int i=0;i<a;i++) { // assigning the frequencies
        if (v[j] == s[i])
            count[j]++;
        else {
            j++;
            count[j]++;
        }
    }
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " " << count[i] << endl; // printing the frequencies
    }
    int freq=0;
    for (int i=0;i<v.size();i++) { // calculating the highest frequency
        if (count[i]>freq)
            freq=count[i];
    }
    cout << "Most frequent character(s):" <<endl;
    for (int i=0; i<count.size(); i++) { // printing the most frequent characters
        if (count[i]==freq) cout << v[i] << " ";
    }  
    return 0;
}