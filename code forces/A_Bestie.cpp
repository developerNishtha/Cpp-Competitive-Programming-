#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                long long n;
                cin >> n;
                long long a[n];
                for (long long i = 0; i < n; i++)
                {
                        cin >> a[i];
                }
                long long g = a[0];
                for (int i = 0; i < n; i++)
                {
                        g = __gcd(g, a[i]);
                }
                if (g == 1)
                {
                        cout << 0 << endl;
                        continue;
                }
                if (__gcd(g, n) == 1)
                {
                        cout << 1 << endl;
                        continue;
                }
                else if (__gcd(g, n - 1) == 1)
                {
                        cout << 2 << endl;
                        continue;
                }
                else
                {
                        cout << 3 << endl;
                        continue;
                }
        }
        return 0;
}