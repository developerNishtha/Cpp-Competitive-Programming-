#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s1,s2;
cin >>s1>>s2;
s1+=s2;
map<char,int> mp;
for(int i=0; i<s1.size();i++){
    mp[s1[i]]++;
}
ll x=mp.size();
if(x==1) cout <<0<<endl;
if(x==2) cout <<1<<endl;
if(x==3) cout <<2<<endl;
if(x==4) cout <<3<<endl;

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