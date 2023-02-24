#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0,mx=0,mn=INT_MAX,mxi=0,mni=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>mx){
            mx=a[i];
            mxi=i;
        }
        if(a[i]<=mn){
            mn=a[i];
            mni=i;
        }
    }
    if(mxi>mni) {
        mni++;
    }
    cout << mxi+(n-mni-1)<<endl;
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