#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n = 2;
    int a[n][n];
    cin >> a[0][0] >> a[0][1];
    cin >> a[1][0] >> a[1][1];
    int x = 0, y = 0;
    int z=0;
    for (int i = 0; i < 2; i++)
    {
        if (a[i][0] > a[x][y])
        {
            x = i;
            y = 0;
        }
        if (a[i][1] > a[x][y])
        {
            y = 1;
            x = i;
        }
    }
    if(y==0 && x==0){
        z=a[1][1];
        a[1][1]=a[0][0];
        a[0][0]=z;

        z=a[0][1];
        a[0][1]=a[1][0];
        a[1][0]=z;
    }
    if(x==1 && y==0){
        z=a[1][1];
        a[1][1]=a[1][0];
        a[1][0]=a[0][0];
        a[0][0]=a[0][1];
        a[0][1]=z;
    }
    if(x==0 && y==1){
        z=a[1][1];
        a[1][1]=a[0][1];
        a[0][1]=a[0][0];
        a[0][0]=a[1][0];
        a[1][0]=z;
    }
    if(a[0][1]>a[0][0] && a[1][1]>a[1][0] && a[1][0]>a[0][0] && a[1][1]>a[0][1]){
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
