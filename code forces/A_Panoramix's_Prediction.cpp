#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void nishtha()
{
    int n, m;
    cin >> n >> m;
    n++;
    while (true)
    {
        if (isPrime(n))
        {
            if (n == m)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            return;
        }
        n++;
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

