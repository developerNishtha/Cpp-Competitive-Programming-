#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
string a,b;
cin >>a>>b;
int ca0=0,ca1=0,cb0=0,cb1=0;
for (int i = 0; i < n; i++)
{
   if(a[i]=='1') ca1++;
   else ca0++;
   if(b[i]=='1') cb1++;
   else cb0++; 
}
if(ca0==cb0 && ca1==cb1) cout<<"YES"<<endl;
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