#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m,mn=0,mx=0;
cin >>n>>m;
int a[m],b[m];
for (int i = 0; i < m; i++)
{
    cin >>a[i];
    b[i]=a[i];
}
sort(a,a+m);
sort(b,b+m);
int i=0,x=n;
while(x--){
    mn+=a[i];
    a[i]-=1;if(a[i]==0) i++;
}
i=m-1;
while(n--){
    mx+=b[i];
    b[i]-=1;
    sort(b,b+m);
}
cout <<mx<<" "<<mn<<endl;
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