#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	   int n;
       cin >>n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
        cin >>a[i];
       }
       int ans=0;
       for(int i=0; i<n-1; i++){
	        if(a[i]!=a[i+1]){
	            if(a[i]!=a[i-1] && i-1>=0){
	                ans++;
	            }
	            else 
	                ans+=2;
	        }
	    }
       cout <<ans<<endl;
       
	}
	return 0;
}