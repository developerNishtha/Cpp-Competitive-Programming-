#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[0])
            cnt++;
    }
    // if(n==1) cout<<0<<endl;

    cout << cnt << endl;
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