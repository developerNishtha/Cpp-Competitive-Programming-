#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int a,c;
cin >>a>>c;

 if((a+c)%2==0){
    cout <<(a+c)/2<<endl;
}
else cout <<-1<<endl;
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