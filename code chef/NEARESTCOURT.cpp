#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
        int x,y,a,b;
        cin >>x>>y;
        a=(x+y)/2;
        b=max((x-a),(y-a));
        cout << b << endl;
		
	}
	return 0;	
}