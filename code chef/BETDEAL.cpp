#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,b;
cin >>a>>b;
int x=100-(100*a/100);
int y=200-(200*b/100);
int mn=min(x,y);
if(x==y) cout<<"BOTH"<<endl;
else if(mn==x) cout <<"FIRST"<<endl;
else cout <<"SECOND"<<endl;
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