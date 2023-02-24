#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin >>s;
set<char> st;
for (int i = 0; i < s.size(); i++)
{
  st.insert(s[i]);
}
if(st.size()%2 ==0 ) cout <<"CHAT WITH HER!"<<endl;
else cout <<"IGNORE HIM!"<<endl;
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