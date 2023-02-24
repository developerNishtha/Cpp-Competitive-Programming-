// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         //int a[n];
//         
//         int a = 2;
//         cout << a << endl;
//         vector<bool> b(n + 1, false);
//         for (int i = 1; i <= n; i += 2)
//         {
//             for (int x = i; x <= n; x = 2 * x)
//             {
//                 cout << x << " ";
//                 b[x] = true;
//             }
//         }
//         for (int y = 1; y <= n; y++)
//         {
//             if (b[y] != true)
//             {
//                 cout << y << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        cout << n << endl;
        for (int x = 0; x < n; x++)
        {
            cout << a[x] << " ";
        }
        cout << endl;

        swap(a[0], a[n - 1]);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i + 1 < n - 1; i++)
        {
            swap(a[i + 1], a[n - 1]);
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
