#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n, k, l, c, d, p, nl, np;
cin>>n>> k>> l>> c>> d>> p>> nl>> np;
int x=k*l;
int y=x/nl;
int z=c*d;
int w=p/np;
cout <<(min(y,min(z,w)))/n<<endl;
}

int main()
{
	int t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}