#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,k;
cin >>n>>k;
ll h=__gcd(n,k);
k=k/h;
n=n/h;
if(k%n==0){
    cout <<1<<endl;
}
else{
    cout <<n<<endl;
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