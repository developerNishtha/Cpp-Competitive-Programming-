#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s1,s2,s3;
cin >>s1>>s2>>s3;
map<char,ll> mp1;
map<char,ll> mp2;
bool n=true;
s1=s1+s2;
sort(s1.begin(),s1.end());
sort(s3.begin(),s3.end());
if(s1.length() != s3.length()){ cout <<"NO"<<endl; return;}
for (int i = 0; i < s1.length(); i++)
{
   if(s1[i] == s3[i]) n=true;
   else{
    cout <<"NO"<<endl;
    return;
   }
}
cout <<"YES"<<endl;
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