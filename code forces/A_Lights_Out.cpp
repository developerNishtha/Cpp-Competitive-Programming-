#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[5][5];
void nishtha()
{
    
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 3; i++,cout << endl)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << 1 - ((a[i][j] + a[i + 1][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1]) % 2);
        }

    }
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
