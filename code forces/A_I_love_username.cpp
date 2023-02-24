#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
	int n;
	cin >> n;
	int cnt = 0;
	int x;
	cin >> x;
	int mn = x;
	int mx = x;
	for (int i = 1; i < n; i++)
	{
		int a;
		cin >> a;
		if (mx < a)
			cnt++, mx = a;
		if (mn > a)
			cnt++, mn = a;
	}
	cout << cnt << endl;
}

int main()
{
	int t = 1;
	// cin >> t;
	while (t--)
	{
		nishtha();
	}
	return 0;
}