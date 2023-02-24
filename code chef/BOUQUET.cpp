#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll mg,my,mr,og,oy,ore,pg,py,pr;
cin >>mg>>my>>mr>>og>>oy>>ore>>pg>>py>>pr;
ll m=mg+my+mr;
ll o=og+oy+ore;
ll p=pg+py+pr;
ll g=mg+og+pg;
ll y=my+oy+py;
ll r=mr+ore+pr;
priority_queue<ll> v;
v.push(m);
v.push(o);
v.push(p);
v.push(g);
v.push(y);
v.push(r);

if(v.top()==0){
    cout <<0<<endl;
}
else if(v.top()%2 != 0){
    cout <<v.top()<<endl;
}
else{
    cout <<v.top() - 1 <<endl;
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