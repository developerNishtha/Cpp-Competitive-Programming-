#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s,s1;
cin >>s;
sort(s.begin(),s.end());
for (int i = 0; i < s.length(); i++)
{
    if(s[i]!='+') s1+=s[i];
}
for (int i = 0; i < s1.length(); i++)
{
    if(i!= s1.length()-1) cout <<s1[i]<<'+';
    else cout <<s1[i];
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