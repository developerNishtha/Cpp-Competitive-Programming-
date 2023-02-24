#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,k;
cin >>n>>k;

if(k%2 !=0){
    cout <<"YES"<<endl;
    for (int i = 1; i < n;i=i+2)
    {
        cout <<i<<" "<<i+1<<endl;
    }
    
}
else{
    if(k%4==0) cout <<"NO"<<endl;
    else{
    cout <<"YES"<<endl;
    int flag=0;
    for (int i = 1; i < n; i=i+2)
{
    if(flag){
        cout <<i<<" "<<i+1<<endl;
    }
    else{
        cout <<i+1<<" "<<i<<endl;
    }
    flag=1-flag;
}
}

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