#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int x;
        cin >>x;
        int a=x%25;
        int b=x/25;
        if(a==0){
            cout << b << endl;
        }
        else{
            cout << 1+b << endl;
        }

	}
	return 0;	
}