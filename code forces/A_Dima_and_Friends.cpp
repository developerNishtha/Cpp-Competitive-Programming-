#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int x=0,cnt=0;
for (int i = 0; i < n; i++)
{
    int a;
    cin >>a;
    x+=a;
}
int y=x%(n+1);
for (int i = 1; i <=5; i++)
{
    y+=1;
    if(y>n+1) y=1;
    else if(y!=1) cnt++;
}
cout <<cnt<<endl;
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