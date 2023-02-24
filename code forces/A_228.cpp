#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll s[4];
map<ll,int> mp;
for (ll i = 0; i < 4; i++)
{
    cin >>s[i];
    mp[s[i]]++;
}
cout <<4-mp.size()<<endl;
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