#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s,ans;
map<string,int> mp;
int mx=0;
for (int i = 0; i < n; i++)
{
    cin >>s;
    mp[s]++;
}
for(auto x:mp){
    //cout<<x.first<<" "<<x.second<<endl;
    if(x.second>mx){
        ans=x.first;
    }
    mx=max(mx,x.second);  
}
cout <<ans<<endl;
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