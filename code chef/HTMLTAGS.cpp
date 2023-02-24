#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s;
    cin >> s;
    int n = s.size();
    
    int i;
    if (n <= 3)
    {
        cout <<"Error"<<endl;
        return;
    }
    else if (s[0] != '<' || s[1] != '/' || s[n - 1] != '>')
    {
        cout <<"Error"<<endl;
        return;
    }
    else
    {
        for (i = 2; i < (n - 1); i++)
        {
            if (s[i] > 47 && s[i] < 58)
                continue;
            else if (s[i] > 96 && s[i] < 123)
                continue;
            else
                cout <<"Error"<<endl;
        return;
        }
    }
    cout << "Success" << endl;
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