#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s;
    cin >> s;
    int up = 0, no = 0, sp = 0, c = 0;
    if (s.length() >= 10)
    {
        for (int i = 97; i <= 122; i++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == i)
                    c++;
            }
        }
        for (int i = 65; i <= 90; i++)
        {
            for (int j = 1; j < s.length() - 1; j++)
            {
                if (s[j] == i)
                    up++;
            }
        }
        for (int i = 1; i < s.length() - 1; i++)
        {
            for (int j = 48; j <= 57; j++)
            {
                if (s[i] == j)
                    no++;
            }
        }
        for (int j = 1; j < s.length() - 1; j++)
        {
            if (s[j] == '@' || s[j] == '#' || s[j] == '%' || s[j] == '&' || s[j] == '?' || s[j] == '}')
                sp++;
        }
    }
    if(s.length()>=10 && c>=1 && up>=1 && no>=1 && sp>=1){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
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