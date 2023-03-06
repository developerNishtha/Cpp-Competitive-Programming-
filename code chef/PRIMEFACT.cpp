#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,y,a;
cin >>n>>y;
if(n%2==0){
    a=y-(n+2);
    cout<<(a/2)+1+(a%2)<<endl;
    return;
}
else if(n%3==0){
    a=y-(n+3);
    cout<<(a/2)+1+(a%2)<<endl;
    return;
}
else if(n%5==0){
    a=y-(n+5);
    cout<<(a/2)+1+(a%2)<<endl;
    return;
}
else if(n%7==0){
    a=y-(n+7);
    cout<<(a/2)+1+(a%2)<<endl;
    return;
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