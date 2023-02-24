#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin >>s;
int j=0,x=1;
string b="hello";
for (int i = 0; i < s.length(); i++)
{
   if(s[i]==b[j]) j+=1;
   if(j==5){
    x=0;
    break;
   }
}
if(x==0) cout <<"YES"<<endl;
else cout <<"NO"<<endl;
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