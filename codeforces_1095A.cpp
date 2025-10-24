/*The program is the solution of codeforces problem no. 1095A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 24-10-2025    */

#include <iostream>
#include <string>
using namespace std;

int main () {
    int n,sum=0;
    cin>>n;
    string s1,s2="";
    cin>>s1;
    for (int i=1; sum<n; i++ ) {
        s2.push_back(s1[sum]);
        sum+=i; // sum+=i=0, sum+=i=1, sum+=i=3, sum+=i=6....
    }
    cout<<s2<<endl;
    return 0;
}