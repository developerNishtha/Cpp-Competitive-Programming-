#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,r,b;
cin >>n>>r>>b;
int p=r/(b+1),q=r%(b+1);
    for(int i=0;i<q;i++)    cout<<string(p+1,'R')<<'B';
    for(int i=q;i<b;i++)    cout<<string(p,'R')<<'B';
    cout<<string(p,'R');
    cout<<endl;
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