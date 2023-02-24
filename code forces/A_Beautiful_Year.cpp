#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int y;
cin >>y;
int a=0,b=0,c=0,d=0;
do
{
    y++;
    a=y/1000;
    b=(y/100)%10;
    c=(y/10)%10;
    d=y%10;
} while (a==b || a==c || a==d || b==c || b==d || c==d);
cout <<y;

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