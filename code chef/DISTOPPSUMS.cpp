#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
for (int i = n/2; i > 0; i--)
{
    cout<<i<<" ";
}
for (int i = n/2+1; i <= n; i++)
{
    cout<<i<<" ";
}
cout <<endl;
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