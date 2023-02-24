#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		//nishtha();
		int a,b,c;
	cin >>a>>b>>c;
	if(a==b && b==c){
		cout <<a+1<<" "<<b+1<<" "<<c+1<<endl;
	}
	else if((a>b && a>c) || (a>b && a>c && b==c)){
		cout << 0 <<" "<< (a-b)+1 <<" "<<(a-c)+1<<endl;
	}
	else if((b>a && b>c) || (b>a && b>c && a==c)){
		cout <<(b-a)+1 <<" "<<0<<" "<<(b-c)+1<<endl;

	}
	else if((c>a && c>b) || (c>a && c>b && a==b)){
		cout <<(c-a)+1<<" "<<(c-b)+1<<" "<<0<<endl;
	}
	}
	return 0;	
}