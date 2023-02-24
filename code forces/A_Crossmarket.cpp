#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m;
cin >>n>>m;
int mn=min(m,n);
int mx=max(n,m);
if(n==1 && m==1){
    cout<<0<<endl;
}
else if(mn==1){
    cout <<mx<<endl;
}
else if(mn%2!=0){
    cout <<(4*(mn/2))+mx<<endl;
}
else{
    cout<<((4*(mn/2))+mx)-2<<endl;
}
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