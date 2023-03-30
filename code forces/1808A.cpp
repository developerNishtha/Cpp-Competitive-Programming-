#include <iostream>
#define ll long long
using namespace std;

void nishtha()
{
    ll l, r;
    cin >> l >> r;
    int max_diff = 0, ans = l;
    for (int i = l; i <= r; i++)
    {
        int mn = 9, mx = 0;
        int num = i;
        while (num > 0)
        {
            int digit = num % 10;
            mn = min(mn, digit);
            mx = max(mx, digit);
            num /= 10;
            if (mx - mn > max_diff)
            {
                max_diff = mx - mn;
                ans = i;
                if (max_diff == 9)
                {
                    break;
                }
            }
        }
        if (max_diff == 9)
        {
            break;
        }
    }

    cout << ans << endl;
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
