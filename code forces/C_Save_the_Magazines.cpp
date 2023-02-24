#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        string a;
        cin >> a;
        // cout << a<<endl;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        int mini=0;
        for (int i = n - 1; i >= 0;)
        {
            if (a[i] == '1')
            {
                mini=b[i];
                while(i>=0){
                    if(a[i]=='1'){
                        ans+=b[i];
                        i--;
                        mini=min(mini,b[i]);
                    }
                    else{
                        ans+=b[i];
                        i--;
                        ans-=mini;
                        break;
                    }
                }
            }
            else{
                i--;
            }
        }
        cout <<ans<<endl;
    }
    return 0;
}