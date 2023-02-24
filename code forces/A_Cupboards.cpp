#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int l[n],r[n];
int cntl=0,cntr=0;
for (int i = 0; i < n; i++)
{
   cin >>l[i]>>r[i];
   if(l[i]==0) cntl++;
   if(r[i]==0) cntr++;
}
cout <<min(cntl,n-cntl)+min(cntr,n-cntr)<<endl;
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