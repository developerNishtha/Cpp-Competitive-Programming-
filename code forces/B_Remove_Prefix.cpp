#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
	ll x, i, s;
	cin >> x;
	ll n[x];
	map<ll, ll> mp;

	s = 0;
	for (i = 0; i < x; i++)
	{
		cin >> n[i];
	}

	for (i = x - 1; i >= 0; i--)
	{
		if (mp[n[i]] == 0)
			s++;
		else
			break;

		mp[n[i]]++;
	}

	cout << x - s << endl;
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