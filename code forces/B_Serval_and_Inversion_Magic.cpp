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

    int cnt=0,a=0;
    for (int i = 0; i < n/2; i++)
    {
        if(s[i]!= s[n-i-1]){
            if(a==0){
                a=1;
                cnt++;
            }
        }
        else{
            a=0;
        }
    }
    if(cnt>1) cout <<"No"<<endl;
    else cout <<"Yes"<<endl;
    
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