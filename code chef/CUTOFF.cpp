#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,x;
cin >>n>>x;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
sort(a,a+n);
cout <<a[n-x]-1<<endl;
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