#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,x1,y1,x2,y2;
cin >>n>>x1>>y1>>x2>>y2;
ll sum=min(x1,n-x1+1);
ll sum2=min(y1,n-y1+1);
ll sum3=min(x2,n-x2+1);
ll sum4=min(y2,n-y2+1);
if(x1==x2 && y1==y2){
    cout <<0<<endl;
}
else{
    cout <<min(abs(x1-x2)+abs(y1-y2),min(sum,sum2)+min(sum3,sum4))<<endl;
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