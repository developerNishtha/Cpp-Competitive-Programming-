#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,x,c;
cin >>n>>x>>c;
int a[n];
int ans=0;
int cnt=0;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    if(a[i]+c<x){
    a[i]=x;
    cnt++;
    } 
}
for (int i = 0; i < n; i++)
{
    ans+=a[i];
}
cout <<ans-(cnt*c)<<endl;


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