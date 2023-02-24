#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n],b[n];
int ans=0;
int sol=INT_MIN;
for (int i = 0; i < n; i++)
{
    cin >>a[i]>>b[i];
    ans-=a[i];
    ans+=b[i];
    sol=max(ans,sol);
}
cout <<sol<<endl;
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