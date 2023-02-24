#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       
    }
     int count=1;
	 int ans=0;
	 int no=0;
	     for(int i=0;i<n;i++){
	         for(int j=i+2;j<=n;j++){
	             if(a[i]==a[j]){
	                 count+=1;
	                 j+=1;
	             }
	             else{
	                 count+=0;              
	             
	             }
	         }
	
	         if(count>ans){
	             ans=count;
	             no=a[i];
	         }
	         else if(count==ans){
	             no=min(no,a[i]);
	         }
	         count=1;
	     }
	     cout<<no<<endl;
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