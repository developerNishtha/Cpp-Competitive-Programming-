#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
int c=0,si=0,e=0,em=0,mh=0;
cin >>n;

for (ll i = 0; i < n; i++)
{
   string s;
   cin>>s;
   if(s=="cakewalk") c++;
   else if(s=="simple") si++;
   else if(s=="easy") e++;
   else if(s=="easy-medium" || s=="medium") em++;
   else if(s=="medium-hard" || s=="hard") mh++;
}
if(c!=0 && si!=0 && e!=0 && em!=0 && mh!=0){
    cout <<"Yes"<<endl;
}
else cout <<"No"<<endl;

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