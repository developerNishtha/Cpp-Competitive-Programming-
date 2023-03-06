#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll arr[n], sol = 0;
    //priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == 0)
        {
            sort(arr, arr + (i + 1));
            sol +=  arr[i];
            arr[i] = 0;
        }
    }
    cout << sol << endl;
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