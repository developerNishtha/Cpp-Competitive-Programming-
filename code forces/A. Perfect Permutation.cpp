#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a = 2, b = 1;
    if (n % 2)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i <= n - 2; i += 2)
    {
        cout << i + 2 << " " << i + 1 << " ";
    }
    cout << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}