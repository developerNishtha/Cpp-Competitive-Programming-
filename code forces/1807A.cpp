#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,b,c;
cin >>a>>b>>c;
if((a+b)==c) cout<<"+"<<endl;
else cout<<"-"<<endl;
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