#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    int ans=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
       ans=max(ans,a[i]-a[0]);
       ans=max(ans,a[n-1]-a[i]);
       ans=max(ans,a[i]-a[(i+1)%n]);
    }
    cout <<ans<<endl;
    
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