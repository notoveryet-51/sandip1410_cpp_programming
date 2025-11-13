// pattern printing challenge
//Date: 12-11-2025
// Name: Sandipan Ray
// MNNIT Allahabad

#include <bits/stdc++.h>
using namespace std;

int main () {
    int i,j;
    char ch='A';
    
    for (i=0;i<5;i++) {
        for (j=ch;j<=ch+4-i;j++) cout << (char)j;
        for (j=1;j<=2*i-1;j++)  cout << " ";
        if (i==0) {
            for (j=ch+3-i;j>=ch;j--)  cout << (char)j;
            
        }
        else {
            for (j=ch+4-i;j>=ch;j--)  cout << (char)j;
        }
        cout << endl;
    }
    return 0;
}