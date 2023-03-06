#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll arr[n], sol = 0;
    priority_queue<ll> pque;
    for (ll i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    
    for (ll i = 0; i < n; i++)
    {
       if(arr[i]>0) pque.push(arr[i]); 
       if(arr[i]==0 && !pque.empty()){
        sol=sol+pque.top();
        pque.pop();
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