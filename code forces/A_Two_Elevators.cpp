#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    ll a,b,c,x;
    cin >>a>>b>>c;
    x= abs(b-c)+c;
    if(a==x){
        cout <<"3"<<endl;
    }
    else if(a<x){
        cout <<"1"<<endl;
    }
    else{
       cout <<"2"<<endl;
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