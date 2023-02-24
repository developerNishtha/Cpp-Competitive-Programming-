#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		long long n;
		long long a=1;
		cin >>n;
		while (a*10 <= n)
		{
			a*=10;
		}
		cout << n-a << endl;
		

	}
	return 0;	
}