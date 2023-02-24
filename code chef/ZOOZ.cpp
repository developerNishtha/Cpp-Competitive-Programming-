#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
	   cin>>n;
	   cout<<"1";
	   for(int i=0;i<n-2;i++)
	   {
	       cout<<"0";
	   }
	   cout<<"1"<<endl;
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