#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
map<char,int> mp;
int cnt=0;
for (int i = 0; i < s.length(); i++)
{
    mp[s[i]]++;
}
for(auto x: mp){
    if(x.second <2 || x.second>2) cnt++;
}
if(cnt==n) cout <<-1<<endl;
else cout <<n-2<<endl;
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