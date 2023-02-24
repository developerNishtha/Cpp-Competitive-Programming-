#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    int sum = 0;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];
        }
        if (sum == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if (sum % 2 == 0)
            {
                cout << abs(sum / 2) << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }

        
    }
    return 0;
}