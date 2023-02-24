#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m,i;
cin >>n>>m;
int mx=INT_MIN;
int ans=0;
for (int i = 1; i <= n; i++)
{
    double a;
    cin >>a;
    if(ceil(double(a/m))>=mx){
        mx=ceil(double(a/m));
        ans=i;
    }
}
cout <<ans<<endl;
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