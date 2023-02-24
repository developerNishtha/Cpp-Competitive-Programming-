#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,k,l,x=1;
cin >>n>>k>>l;
if(k==1 && n>1) cout <<-1<<endl;
else if((k*l)<n) cout <<-1<<endl;
else{
    for (int i = 1; i <= n; i++)
    {
        cout <<x<<" ";
        x++;
        if(x==(k+1)) x=1;
    }
    cout <<endl;
}
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