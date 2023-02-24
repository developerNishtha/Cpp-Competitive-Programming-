#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
        int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=1;i<n;i++){
	        if(s[i]<s[i-1]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
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