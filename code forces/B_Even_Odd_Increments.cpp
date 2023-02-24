#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q, x, y;
        cin >> n >> q;
        long long a[n];
        long long ecount=0,ocount=0,ans=0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0){
                ecount++;
                ans+=a[i];
            }
            else{
                ocount++;
                ans+=a[i];
            }
        }
        while(q--)
        {
            cin >>x>>y;
            if(x==1){
                ans+=(ocount*y);
                if(y&1){
                    ecount+=ocount;
                    ocount=0;
                }
            }
            else{
                ans+=(ecount*y);
                if(y&1){
                    ocount+=ecount;
                    ecount=0;
                }
            }
            cout <<ans<<endl;
        }
    }
    return 0;
}