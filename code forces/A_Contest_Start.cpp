#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,x,k;
cin >>n>>x>>k;
ll z=k/x;
if(z>n){
	cout <<(n*(n-1))/2<<endl;
}
else{
	cout <<(n*z)-((z*(z+1))/2)<<endl;
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