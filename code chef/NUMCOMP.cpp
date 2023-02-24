#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll a,b,n;
cin >>a>>b>>n;
	if(n%2==0){
	        a=abs(a);
	        b=abs(b);
	        if(a>b) cout<<1<<endl;
	        else if(a<b) cout<<2<<endl;
	        else cout<<0<<endl;
	    }
	else {
	        if(a>b) cout<<1<<endl;
	        else if(a<b) cout<<2<<endl;
	        else cout<<0<<endl;
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