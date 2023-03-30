#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    if ((A + 1) % B == (C + 1) % D)
        cout << 1 << endl;
    else
        cout << ((B * D) / __gcd(B, D)) - (A % B) << endl;
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