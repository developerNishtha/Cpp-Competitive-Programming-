#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin >>s;
vector<char> v;
for (int i = 0; i < s.length(); i++)
{
    s[i]=tolower(s[i]);
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u' || s[i]=='y'){

    }
    else{
        v.push_back(s[i]);
    }
}
for (int i = 0; i < v.size(); i++)
{
    cout <<"."<<v[i];
}

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