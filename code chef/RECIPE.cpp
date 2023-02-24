#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int p=a[0];
        for (int i = 0; i < n; i++)
        {
           p=__gcd(a[i],p);
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i]/p <<" ";
        }
        cout << endl;
        
        
	}
	return 0;	
}