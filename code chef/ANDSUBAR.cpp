#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, lp = 0;
    cin >> n;
    lp=log2(n);
    ll x=pow(2,lp);
    ll sp=x/2;
    cout <<max((x-sp),(n-x+1))<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}