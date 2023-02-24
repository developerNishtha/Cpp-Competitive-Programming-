#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n];
    unordered_map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    bool flag = false;
    for (auto it : mp)
    {
        if (it.second % 2 == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Marichka" << endl;
    }
    else
    {
        cout << "Zenyk" << endl;
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