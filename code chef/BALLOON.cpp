#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    int a[n],b[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
       cin >>a[i];
       
    }
     for(int i=n-1;i>=0;i--)
	    {
	        if(a[i]>7){
	            count++;
	        }
	        if(a[i]<=7){
	            break;
	        }
	    }
	    cout<<n-count<<endl;
    
    
    
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