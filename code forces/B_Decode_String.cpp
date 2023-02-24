#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
string sol="";
int ans=0;

for (int i =n-1; i >=0 ;)
{
	if(s[i]=='0'){
		ans=(s[i-2]-48)*10 + s[i-1]-48;
		i-=3;
	}
	else{
		ans=s[i]-48;
		i-=1;
	}
	sol+=char(ans+97-1);
}
reverse(sol.begin(),sol.end());
cout <<sol<<endl;

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