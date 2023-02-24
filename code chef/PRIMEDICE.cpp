#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,b;
cin >>a>>b;
if((a+b)==2 | (a+b)==3){
    cout <<"ALICE"<<endl;
}
else if((a+b)%2==0 || (a+b)%3==0 ){
 cout <<"BOB"<<endl;
}
else{
    cout <<"ALICE"<<endl;
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