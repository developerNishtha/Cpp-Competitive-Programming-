#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,a;
cin >>n;
string s,s1,s2;
cin >>s;
map<char,int> mp,x;
for (int i = 0; i < n; i++)
{
    mp[s[i]]++;
}
a=mp.size();
if(mp.size()==n) {
    cout<<n<<endl;
    return;
}
if(mp.size()==1){
    cout<<2<<endl;
    return;
}
for (int i = n-1; i >= 0; i--)
{
	mp[s[i]]--;
	if(mp[s[i]]==0) mp.erase(s[i]);
	x[s[i]]++;
	a=max(a,int(x.size()+mp.size()));
}
cout<<a<<endl;
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