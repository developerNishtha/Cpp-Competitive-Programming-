#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin>>s;
if(s.length()==3){
    cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    return;
}
if(s[1]=='a') cout<<s[0]<<' '<<s[1]<<' '<<s.substr(2,s.size()-2)<<endl;
else cout<<s[0]<<' '<<s.substr(1,s.size()-2)<<' '<<s[s.size()-1]<<endl;
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