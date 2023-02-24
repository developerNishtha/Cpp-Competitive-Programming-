#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m;
cin >>n>>m;
string s1,s2;
cin >>s1>>s2;
int cnt1=0,cnt2=0;
reverse(s2.begin(),s2.end());
string s3=s1+s2;
for (int i = 0; i < s3.length(); i++)
{
    if(s3[i]==s3[i+1]) cnt1=cnt1+1;
    if(cnt1>1) cnt2=1;
}
if(cnt2==0) cout <<"YES"<<endl;
else cout <<"NO"<<endl;
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