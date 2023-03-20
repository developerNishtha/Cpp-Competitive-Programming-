#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, s, r;
    cin >> n >> s >> r;
    int c1 = r % (n - 1);
    int c2 = r / (n - 1);
    cout << s - r << " ";
    for (int i = 0; i < n - 1; i++)
    {
        if (c1 > 0)
        {
            cout << c2 + 1 << " ";
            c1--;
        }
        else cout << c2 << " ";
        
    }
    cout << endl;
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