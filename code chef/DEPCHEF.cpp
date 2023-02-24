#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    int a[n],d[n];
    int mx=-1;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        cin >>d[i];
    }
    if(d[0]>a[n-1]+a[1]){
        mx=max(mx,d[0]);
    }
    if(d[n-1]>a[n-2]+a[0]){
        mx=max(mx,d[n-1]);
    }
    for (int i = 1; i < n-1; i++)
    {
        if(d[i]>a[i+1]+a[i-1]){
            mx=max(mx,d[i]);
        }
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


