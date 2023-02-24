#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void nishtha()
{
    int n;
    cin >> n;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
            b += 1;
        else
            b -= 1;
    }
    cout << b << endl;
}
 
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}