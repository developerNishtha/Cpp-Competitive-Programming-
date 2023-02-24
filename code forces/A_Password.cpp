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
		//int ans=0;
		for (int i = 0; i < n; i++)
		{
			cin >>a[i];
		}
		int x=10-n;
		int y=9-n;
		cout << 3*x*y<<endl;
		
			
	}
	return 0;	
}