#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll a[n];
    ll ans = 0, cnt = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n; i++)
    {
        if(a[i]>=cnt){
            ans+=a[i]-cnt;
            cnt++;
        }
    }
    cout<<ans<<endl;
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