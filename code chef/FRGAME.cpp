#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a >= b)
    {
        b = b + c;
        if (a >= b)
        {
            b = b + d;
            if (a >= b)
            {
                cout << "N" << endl;
                return;
            }
            else
            {
                cout << "S" << endl;
                return;
            }
        }

        else if (a < b)
        {
            a += d;
            if (a >= b)
            {
                cout << "N" << endl;
                return;
            }
            else
                {
                    cout << "S" << endl;
                    return;
                }
        }
    }
    else if (a < b)
    {
        a = a + c;
        if (a >= b)
        {
            b = b + d;
            if (a >= b)
            {
                cout << "N" << endl;
                return;
            }
            else
            {
                cout << "S" << endl;
                return;
            }
        }
        else 
        {
            a = a + d;
            if (a >= b)
            {
                cout << "N" << endl;
                return;
            }
            else
            {
                cout << "S" << endl;
                return;
            }

        }
    }
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