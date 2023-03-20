#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, like = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0) like++;
    }
    for (int i = 1; i <= like; i++)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= n - like; i++)
    {
        cout << like - i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - like; i++)
    {
        cout << "1 0 ";
    }
    for (int i = 1; i <= like - (n - like); i++)
    {
        cout << i << " ";
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