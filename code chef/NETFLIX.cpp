#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,b,c,x;
cin >>a>>b>>c>>x;
if(a+b>=x || a+c>=x || b+c>=x) cout <<"YES"<<endl;
else cout <<"NO"<<endl;
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