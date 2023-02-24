#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll x=sqrt(n/2);
ll y=sqrt(n/4);
if(n%2==0 && (x*x)==n/2){
    cout <<"YES"<<endl;
    return;
}
else if(n%4==0 && (y*y)==n/4){
    cout <<"YES"<<endl;
    return;
}
else{
    cout<<"NO"<<endl;
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