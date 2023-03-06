#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll a,b,n,m;
    cin >> a >> b >> n >> m;
    ll x = b*n;
    ll y = (n/(m+1))*(a*m)+(n%(m+1))*min(a,b);
    cout << min(x,y) << endl;  
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