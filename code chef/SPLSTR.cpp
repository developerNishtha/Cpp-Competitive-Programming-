#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,ans;
        int count0 = 0;
        int count1 = 0;
        cin >>n>>k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
           if(s[i]=='0'){
            count0++;
           }
           else{
            count1++;
           }
        }
        ans=abs(count1-count0);
        if(ans%k == 0){
            cout << ans/k << endl;
        }
        else{
            cout << (ans/k)+1 << endl;
            }
        
    }
    return 0;
}