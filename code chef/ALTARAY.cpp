#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n];
ll count[n];
count[n-1]=1;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
for (int i = n-2; i >= 0; i--)
{
    if(a[i]*a[i+1]<0){
        count[i]=count[i+1]+1;
    }
    else{
        count[i]=1;
    }
}
for (int i = 0; i < n; i++)
{
    cout <<count[i]<<" ";
}

}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
        cout <<endl;
	}
    
	return 0;	
}