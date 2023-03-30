#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
if(n%2 !=0 || n<4) {
    cout<<-1<<endl;
    return;
}
if(n==4) cout<<1<<" "<<1<<endl;
else if(n%6==4) cout<<(n/6)+1<<" "<<(n/4)<<endl;
else if(n%6==2) cout<<((n-8)/6)+2<<" "<<(n/4)<<endl;
else cout<<(n/6)<<" "<<(n/4)<<endl;
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