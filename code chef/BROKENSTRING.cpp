#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s,s1,s2;
cin >>s;
int x=(n+1)/2;
for (int i = 0; i < n/2; i++)
{
    s1+=s[i];
}
for (int i = (n/2); i < n; i++)
{
    s2+=s[i];
}
if(s1==s2){
    cout <<"YES"<<endl;
}
else{
    cout <<"NO"<<endl;
}




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