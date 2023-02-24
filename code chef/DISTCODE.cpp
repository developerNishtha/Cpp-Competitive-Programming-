#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin >>s;
set<pair<char,char>> st;
for (ll i = 0; i < s.size()-1; i++)
{
    st.insert({s[i],s[i+1]});
}
cout <<st.size()<<endl;
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