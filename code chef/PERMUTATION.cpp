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
sort (a,a+n);
int c=0;
for (int i = 0; i < n; i++)
{
    if(a[i]!=(i+1) && a[i]<=i+1){
        c=c+((i+1)-a[i]);
    }
    else if(a[i]>i+1){
        cout <<-1<<endl;
        return;
    }
}
cout <<c<<endl;


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