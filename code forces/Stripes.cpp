#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[8];
        int r = 0;
        int b = 0;
        int nishtha = 0;
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < 8; i++)
        {
            r = 0;
            for (int j = 0; j < 8; j++)
            {
                if (s[i][j] == 'R')

                    r++;
            }
            if (r == 8)
            {
                cout << "R" << endl;
                nishtha = 1;
                break;
            }
        }
        if (!nishtha)
        {
            for (int i = 0; i < 8; i++)
            {
                b = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (s[j][i] == 'B')
                        b++;
                }
                if (b == 8)
                {
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}