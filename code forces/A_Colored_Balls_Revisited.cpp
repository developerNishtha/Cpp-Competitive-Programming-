#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
int mx=0,count=0;
for (int i = 1; i <= n; i++)
{
    cin >>a[i];
    if(a[i]>mx){
        mx=a[i];
        count=i;
    }
}
cout <<count<<endl;




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