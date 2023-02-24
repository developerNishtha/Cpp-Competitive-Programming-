#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,q,ans = 0;
        cin >> n >> q;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            ans += a[i];
        }
        
        for(int i=0;i<q;i++)
        {
            int l,r;
            cin >> l >> r;
            if(abs(l-r+1) % 2) ans++;
        }
        
        cout << ans << endl;
    }
    return 0;
}