#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
int mx=0;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
    mx=max(mx,a[i]);

}
cout <<mx<<endl;


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