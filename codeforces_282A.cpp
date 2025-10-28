/*The program is the solution of codeforces problem no. 282A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 24-10-2025    */

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, X=0;
    cin>>n;
    for(int i=0;i<n; i++) {
        string s;
        cin>>s;
        if (s=="++X" || s== "X++") 
            X++;
        else if (s== "--X" || s== "X--")
            X--;   
    }
    cout<<X;
}
