#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int count1_0 = 0;
		int count1_1 = 0;
		int count2_0 = 0;
		int count2_1 = 0;
		int a[n];
		int b[n];
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == 1)
			{
				count1_1++;
			}
			else
			{
				count1_0++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			if (b[i] == 1)
			{
				count2_1++;
			}
			else
			{
				count2_0++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				ans++;
			}
		}
		int x = max(count1_0, count2_0) - min(count1_0, count2_0) + max(count1_1, count2_1) - min(count1_1, count2_1);
		x = x / 2;
		if (ans == 0)
		{
			cout << "0" << endl;
		}
		else
		{
			if (count1_0 == count2_0 && count1_1 == count2_1)
			{
				cout << "1" << endl;
			}
			else
			{
				if (x < ans)
				{
					cout << x + 1 << endl;
				}
				else
				{
					cout << x << endl;
				}
			}
		}
	}
		return 0;
	}