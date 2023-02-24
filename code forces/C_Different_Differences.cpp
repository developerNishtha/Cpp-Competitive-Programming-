#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int k, n;
    cin >> k;
    cin >> n;
    int dif = 1, c = 1;
    for (int i = 1; i <= k; i++)
    {
        cout <<c<<" ";
        if((n-(c+dif))>=(k-1-i)){
            c+=dif;
            dif++;
        }
        else{
            c++;
        }
    }
    cout <<endl;
    
   
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
