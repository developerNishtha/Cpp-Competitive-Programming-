#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m,x,y,d;
cin >>n>>m>>x>>y>>d;
if(min(n-x,y-1) <=d && min(m-y,x-1)<=d){
    cout<<-1<<endl;
    return;
}
else{
    cout<< (n-1)+(m-1)<<endl;
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