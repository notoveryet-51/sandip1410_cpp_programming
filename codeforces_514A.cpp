/*The program is the solution of codeforces problem no. 514A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 17-12-2025    */

#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

int main()  {
    ll n;
    cin >> n;
    vector<ll>vec;
    if (n == 0) {
        cout << n;
        return 0;
    }
    while (n>0) {
        ll digit=n%10;
        ll digit1=9-digit;
        if (n < 10 && digit == 9)   vec.push_back(digit);
        else    vec.push_back(min(digit, digit1));
        n/=10;
    }
    ll length=vec.size();
    ll mul=1;
    ll req=0;
    for (int i=0; i<length ; i++) {
        req+=mul*vec[i];
        mul*=10;
    }
    cout << req;
    return 0;
}