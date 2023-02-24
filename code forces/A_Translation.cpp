#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s,t;
cin >>s>>t;
reverse(s.begin(),s.end());
if(s==t) cout<<"YES"<<endl;
else cout <<"NO"<<endl;
}

int main()
{
	int t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}