#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
bool flag=false;
for (int i = 0; i < n-1; i++)
{
	if(s[i]==s[i+1]){
		flag=true;
	}
}
if(flag) cout <<"YES"<<endl;
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