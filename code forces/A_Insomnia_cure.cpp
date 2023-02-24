#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int k,l,m,n,d;
cin >>k>>l>>m>>n>>d;
int cnt=0;
for (int i = 1; i <=d; i++)
{
    if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0) cnt++;
}
cout <<d-cnt<<endl;
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