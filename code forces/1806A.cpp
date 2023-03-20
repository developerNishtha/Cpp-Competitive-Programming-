#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll n = a+d-b;
    ll x=(d-b);
    ll ans=x+abs(n-c);
    if(n<c) {
        cout<<-1<<endl;
        return;
    }
    else if(b>d){
        cout<<-1<<endl;
        return;
    }
    else cout<<ans<<endl;
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