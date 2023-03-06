#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0;
   string x="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    if (x.find(s) != string::npos)
        a=1;
    if(a==1) cout <<"YES"<<endl;
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