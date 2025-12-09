#include <bits/stdc++.h>
using namespace std;

int main () {
    string s1,s2;
    cin >>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    int flag=0;
    for (int i=n1-1,j=n2-1; i>=0,j>=0; i--,j--) {
        if (s1[i]==s2[j])   flag++;
        else break;
    }
    cout << n1-flag+n2-flag << endl;
    return 0;
}