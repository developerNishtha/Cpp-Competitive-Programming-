#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int a, b, c;
    cin >> a >> b >> c;
    int na = b - (c - b);
    if (na >= a && na % a == 0 && na != 0)
    {
        cout << "YES" << endl;
        return;
    }
    int nb = a + (c - a) / 2;
    if (nb >= b && (c - a) % 2 == 0 && nb % b == 0 && nb != 0)
    {
        cout << "YES" << endl;
        return;
    }
    int nc = a + 2 * (b - a);
    if (nc >= c && nc % c == 0 && nc != 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
