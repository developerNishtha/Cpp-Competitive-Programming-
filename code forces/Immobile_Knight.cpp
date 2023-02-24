#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if(max(n,m)==3){
            if(min(n,m)==1){
                cout <<"1 1"<<endl;
            }
            else{
                cout <<"2 2"<<endl;
            }
        }
        else{
            cout <<"1 1"<<endl;
        }
    }
    return 0;
}