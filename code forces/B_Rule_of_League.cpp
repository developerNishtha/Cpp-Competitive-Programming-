#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,x,y;
cin >>n>>x>>y;
if(x==0 && y==0) cout <<-1<<endl;
else if(x>0 && y>0) cout <<-1<<endl;
else{
	if(x > y)swap(x, y);
		if((n - 1) % y)
		{
			cout << -1 << endl;
			return;
		}
		for(int k = 2; k <= n; k += y)
		{
			for(int i = 1; i <= y; i++)cout << k << ' ';
		}
		cout << endl;
}

}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}