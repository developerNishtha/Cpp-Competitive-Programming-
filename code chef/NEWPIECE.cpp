#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,b,p,q;
cin >>a>>b>>p>>q;
if((a==p && b==q)) cout<<0<<endl;
else if((a+b)%2 ==0 && (p+q)%2==0 || (a+b)%2 !=0 && (p+q)%2!=0){
    cout<<2<<endl;
}
else{
    cout<<1<<endl;
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