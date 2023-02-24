#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,m,k,x;
cin >>n>>m>>k>>x;
ll a=(n*k)+m;
if((x%a - (n*(k-1))) > 0){
    cout <<"YES"<<endl;
}
else if(x%a == 0){
    cout <<"YES"<<endl;
}
 
else {
    cout <<"NO"<<endl;
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