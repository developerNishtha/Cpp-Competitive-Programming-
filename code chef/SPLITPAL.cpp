#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        int y = n - 1;
        int cnt = 0;
        while (x < y)
        {
            if (a[x] == a[y])
            {
                x++;
                y--;
            }
            else if (a[x] > a[y])
            {
                a[x] -= a[y];
                y--;
                cnt++;
            }

            else
            {
                a[y] -= a[x];
                x++;
                // y++;
                cnt++;
            }
        }
        cout << cnt << endl;
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