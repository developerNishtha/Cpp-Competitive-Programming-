#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n=3;
int x[n],y[n];
for (int i = 0; i < 3; i++)
{
    cin >>x[i]>>y[i];
}
sort(x,x+n);
sort(y,y+n);
if(x[0]<x[1] && x[1]<x[2] && y[0]<y[1] && y[1]<y[2]){
    cout <<"YES"<<endl;
    return;
}
else if(x[0]==x[1] && x[1]<x[2] && y[0]<y[1] && y[1]<y[2]){
    cout <<"YES"<<endl;
    return;
}
else if(x[0]<x[1] && x[1]==x[2] && y[0]<y[1] && y[1]<y[2]){
    cout <<"YES"<<endl;
    return;
}
else if(x[0]<x[1] && x[1]<x[2] && y[0]==y[1] && y[1]<y[2]){
    cout <<"YES"<<endl;
    return;
}
else if(x[0]<x[1] && x[1]<x[2] && y[0]<y[1] && y[1]==y[2]){
    cout <<"YES"<<endl;
    return;
}
else{
    cout <<"NO"<<endl;
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


