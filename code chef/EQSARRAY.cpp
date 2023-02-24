#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
        int n,k;
	    cin>>n>>k;
	    
	    int a[n];
	    int flag=0;
	    for(int i=0; i<n; i++){
	        
	        cin>>a[i];
	        
	    }
	    for(int i=0; i< n-1; i++){
	        
	        if(a[i]== k)
	            flag =1;
	        
	    }
	    if(n==1){
	        
	        if(a[0]==k)
	        flag =1;
	        
	    }
	    
	    if(flag == 1)
	    cout<<"Yes"<<endl;
	    
	    else
	    cout<<"No"<<endl;
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