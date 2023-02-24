#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
string s;
cin >>s;
int x=s.length();
string s1=s;
// for (int i = 0; i < s.length(); i++)
// {
//     a[i]=s[i];
//     a[x-1]=s[i];
//     x--;
// }

reverse(s.begin(),s.end());
cout <<s+s1;
cout <<endl;


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