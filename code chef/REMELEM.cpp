#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,k;
cin >>n>>k;
int a[n];
int count=0;
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
sort(a,a+n);
if(n==1 ){
    cout <<"YES"<<endl;
    return;
} 
else {
for (int i = n-1; i >=1 ; i--)
{
    if(a[0]+a[i] <= k){
        count++;
    }
    
}

}
if(n-count==1){
    cout <<"YES"<<endl;
}
else {
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