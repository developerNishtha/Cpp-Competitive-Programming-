#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int s1,s2,s3;
cin >>s1>>s2>>s3;
int a = sqrt(s1 * s2 / s3);
int b = sqrt(s3 * s1 / s2);
int c = sqrt(s3 * s2 / s1);
int sum = a + b + c;
cout <<4*sum<<endl;
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