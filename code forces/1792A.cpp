#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,cnt=0;
cin >>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    if(a[i]==1) cnt++;
}
cout << n - cnt / 2 <<endl;
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