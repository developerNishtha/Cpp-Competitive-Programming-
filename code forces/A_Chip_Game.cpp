#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m;
cin >>n>>m;
if((n%2==0 && m%2==0) || (n%2!=0 && m%2!=0)) cout <<"Tonya"<<endl;
else cout <<"Burenka"<<endl;
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