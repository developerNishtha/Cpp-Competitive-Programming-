#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
void nishtha()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    map<int, int> amp;
    vector<pair<int, int>> v;
    vector<int> x;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(a[i], b[i]));
    }
    sort(v.begin(), v.end(), sortbysec);
    // for (int i = 0; i < n; i++)
    // {
    //     cout <<b[i]<<" ";
    // }

    for (int i = 0; i < n; i++)
    {
        if (amp[v[i].first]<=0){
            ans+=v[i].second;
            amp[v[i].first]++;
            k--;
        }
        if(k==0){
            break;
        }
    }

    if (k==0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
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