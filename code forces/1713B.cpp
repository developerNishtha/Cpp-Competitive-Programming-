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
int in=0,dec=0;
for (int i = 1; i < n; i++)
{
    if(a[i]>a[i-1]){
        if(dec==0) in++;
        else{
            cout<<"NO"<<endl;
            return;
            }        
    }
    else if(a[i]<a[i-1]) dec++;       
}
cout<<"YES"<<endl;
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