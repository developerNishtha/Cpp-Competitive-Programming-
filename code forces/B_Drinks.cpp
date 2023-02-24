#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    float a[n];
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += (a[i] / 100);
        //cout <<ans;
    }
    float sol = (ans / n)*100;
    cout << sol << endl;
}

int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}