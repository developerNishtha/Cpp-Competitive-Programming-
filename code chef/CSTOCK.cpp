#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        float ans = 0;
        float s;
        cin >> s >> a >> b >> c;
        
       
            ans = s + ((s * c) / 100);
            //cout << ans<<endl;
            if (ans >= a && ans <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        
    }
    return 0;
}