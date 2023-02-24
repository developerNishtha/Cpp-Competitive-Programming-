#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n];
    int mn = INT_MAX;
    int mx = 0;
    int c = 0, d = 0;
    ll ans=0; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn,a[i] );
        mx = max(mx,a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            c++;
        }
        if (a[i] == mx)
        {
            d++;
        }
    }
    if (mn == mx)
    {
        ans=n * (n - 1);
        
    }
    else
    {
        ans= (c * d) * 2 ;
    }
    cout << ans << endl;
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
