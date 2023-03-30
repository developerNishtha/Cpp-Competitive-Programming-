// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void nishtha()
// {
//     int n;
//     cin >> n;
//     string s, ans;
//     cin >> s;
//     int cnt = 1, x = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (s[i] == s[i - 1])
//             cnt++;
//         else
//         {
//             if (cnt & 1)
//                 ans += s[i - 1];
//             else
//             {
//                 ans += s[i - 1];
//                 ans += s[i - 1];
//             }
//             cnt = 1;
//         }
//     }
//     if (cnt & 1)
//         ans += s[n - 1];
//     else
//     {
//         ans += s[n - 1];
//         ans += s[n - 1];
//     }

//     cout << ans << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         nishtha();
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        int cnt = 1;
        while (i + 1 < n && s[i + 1] == c)
        {
            i++;
            cnt++;
        }
        ans += c;
        if (cnt % 2 == 0)
        {
            ans += c;
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
