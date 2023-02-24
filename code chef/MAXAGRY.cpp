#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,k;
cin >>n>>k;
ll ans=((n-1)*n)/2;
ll ans2=n-2*k;
if(n/2>k){
    ans=ans-(ans2*(ans2-1))/2;}
    cout <<ans<<endl;
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