#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n];
    if (n % 2 == 0)
    {
        for (int i = n - 2; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << n - 1 << " " << n << " ";
    }
    else
    {
        cout <<1<<" "<<2<<" "<<3<<" ";
        for (int i = n-2; i >= 4; i--)
        {
            cout << i << " ";
        }
        
         cout << n - 1 << " " << n << " ";
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