#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s1,s2;
string s;
cin >>s1>>s2;
for (int i = 0; i < s1.size(); i++)
{
    if(s1[i]==s2[i]){
        s+='0';
    }
    else{
        s+='1';
    }
}
cout <<s<<endl;

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