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
        string str;
        cin >> str;
        string s = "Timru";
        if (n == 5)
        {
            sort(str.begin(), str.end());
            if (str == s)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}