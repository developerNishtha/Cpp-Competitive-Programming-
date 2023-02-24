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
    if(a[i]>7){
        cout <<"no"<<endl;
        return;
    }
}
bool flag=true;
int i=0,j=n-1;
if(a[0] != 1) flag=false;
while(i<j)
{
    if(a[i] != a[j]) flag=false;
    if(a[i]!=a[i+1] && a[i+1] !=a[i]+1) flag=false;
    i++;
    j--;
}
if(a[i] != 7) flag=false;
if(flag==true) cout <<"yes"<<endl;
else cout <<"no"<<endl;


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