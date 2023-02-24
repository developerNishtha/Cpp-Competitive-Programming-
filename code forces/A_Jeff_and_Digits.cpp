#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
int c0=0,c5=0;
for (int i = 0; i < n; i++)
{
   cin >>a[i];
   if(a[i]==0) c0++;
   else c5++;
}
c5=floor(c5/9)*9;
if(c0==0) cout <<-1<<endl;
else if(c5<9 && c0>0) cout <<0<<endl;
else{
    for (int i = 0; i < c5; i++)
    {
        cout<<5;
    }
     for (int i = 0; i < c0; i++)
    {
        cout<<0;
    }
    
}
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