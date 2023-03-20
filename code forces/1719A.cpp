#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
char c;
cin >>c;
string sample="codeforces";
if (sample.find(c) != string::npos ) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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