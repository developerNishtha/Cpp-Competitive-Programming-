#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];

for (int i = 0; i < n; i++)
{
    cin >>a[i];  
}
int mx=a[0];
for (int i = 0; i < n; i++)
{
   if(a[i]>mx){
    mx=a[i];
   }
}

cout <<n-mx<<endl;

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