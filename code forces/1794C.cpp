#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin>>n;
int a[n];
int cnt=1;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
cout<<cnt<<" ";
for (int i = 1; i < n; i++)
{
    if(a[i-cnt]>=cnt+1) cnt++;
    cout<<cnt<<" ";
}
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