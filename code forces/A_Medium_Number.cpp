#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,b,c;
cin >>a>>b>>c;
int mx=max(a,max(c,b));
int mn=min(a,min(b,c));
if(mx==a && mn==b || mx==b &&mn==a){
    cout <<c<<endl;
}
else if(mx==a && mn==c || mx==c &&mn==a){
    cout <<b<<endl;
}
else if(mx==c && mn==b || mx==b &&mn==c){
    cout <<a<<endl;
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