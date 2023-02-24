#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    vector<int>v(n);
	    vector<int>u(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        v[i]=a[n-i-1]-a[i];
	        u[i]=v[i];
	        
	    }
	    sort(v.begin(),v.end());
        
	    reverse(v.begin(),v.end());
        
	    if(v==u)
	    {
	        int b=(a[n-1]-a[0]);
	        cout<<b<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}
