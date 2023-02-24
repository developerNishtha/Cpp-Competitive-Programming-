#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s,x;
cin >>s>>x;
int cnt=0;
for (int i = 0; i < x.size(); i++)
{
    for (int j = 0; j < s.size(); j++)
    {
        if(s[j]==x[i]){
            cnt++;
            break;
        }
    }
}
cout <<cnt<<endl;
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