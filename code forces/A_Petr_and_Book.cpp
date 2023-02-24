#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int i,n;
cin>>n;
int a[7];
for(i=0;i<7;i++)
    cin>>a[i];
while(n>0)
{  if(i==7)
    i=0;
    n-=a[i];
i++;
}
cout<<i;

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