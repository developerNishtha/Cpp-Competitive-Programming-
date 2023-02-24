#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,a,b;
cin >>n>>a>>b;
ll x=log(n)/log(2);
cout <<(x*a)+((x-1)*b)<<endl;
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