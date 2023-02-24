#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin >>s;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='-' && s[i+1]=='.') {cout <<1; i++;}
    else if(s[i]=='-' && s[i+1]=='-') {cout <<2; i++;}
    else cout <<0;
}

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