#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int j=n;
if(n%4 !=0) cout <<"NO"<<endl;
else{
    cout <<"YES"<<endl;
	for (int i = 1; i <= n / 4; i++)
		cout << i << " ";
	for (int i = 3 * n / 4 + 1; i <= n; i++)
		cout << i << " ";
	cout << endl;
	for (int i = n / 4 + 1; i <= 3 * n / 4; i++)
		cout << i << " ";
	cout << endl;;
    
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