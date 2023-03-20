#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string s;
cin >>s;
int a=0,b=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='U') a++;
    else if(s[i]=='D') a--;
    else if(s[i]=='R') b++;
    else if(s[i]=='L') b--;
    if(a==1 && b==1) {
        cout<<"YES"<<endl;
        return;
    }
}
cout<<"NO"<<endl;
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