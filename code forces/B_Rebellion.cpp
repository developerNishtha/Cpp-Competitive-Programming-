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
		int x=0;
		int y=n-1;
		int z=0;
		while(x<y){
			if(a[y]==1){
				y--;
			}
			else if(a[x]==0 && a[y]==1){
				x++;
			}
			else if(a[x]==1 && a[y]==1){
				x++;
				y--;
			}
			else if(a[x]==1 && a[y]==0){
				z++;
				x++;
				y--;	
			}
			
			
			else{x++;}
		}
		cout << z << endl;

		
	}
	return 0;	
}