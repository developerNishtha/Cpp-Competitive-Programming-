#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
	ll n, ans = 0,mod = 1e9 + 7;
		cin >> n;
		ans=n*(n-1)%mod;
		for (int i = 2; i <= n; i++)
			ans *= i,ans %= mod;
		cout << ans << endl;
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