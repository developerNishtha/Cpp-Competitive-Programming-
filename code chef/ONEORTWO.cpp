#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll x,y;
cin >>x>>y;
if(x==y && x%2==0) {cout<<"CHEFINA"<<endl;return;}
else if(x==y && x%2!=0) {cout<<"CHEF"<<endl;return;}
ll df=abs(x-y);
if(df>=2 && x>y){
    cout<<"CHEF"<<endl;
    return;
}
else if(df>=2 && x<y){
    cout<<"CHEFINA"<<endl;
    return;
}
if(x%2==0 && x>y){
    cout<<"CHEF"<<endl;
    return;
}
else if(x%2!=0 && x>y){
    cout<<"CHEFINA"<<endl;
    return;
}
else if(y%2 ==0 && y>x){
    cout<<"CHEF"<<endl;
    return;
}
else {
    cout<<"CHEFINA"<<endl;
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