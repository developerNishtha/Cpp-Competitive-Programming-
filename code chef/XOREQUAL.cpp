#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,a,b;
        cin >> n;
        a=(pow(2, n)-1);
        b=(long long)(pow(10,9)+7);

        cout << ((a/2))%b<< endl;
        
    }
    return 0;
}