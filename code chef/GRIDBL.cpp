#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, e, f;
        cin >> n >> m;
        if (n % 2 == 0 && m % 2 == 0)
        {
            e = n;
            f = m;
        }
        else if (n % 2 == 0 && m % 2 != 0)
        {
            e = n;
            f = m - 1;
        }
        else if (n % 2 != 0 && m % 2 != 0)
        {
            e = n - 1;
            f = m - 1;
        }
        else
        {
            e = n - 1;
            f = m;
        }

        cout << (m * n) - (e * f) << endl;
    }
    return 0;
}