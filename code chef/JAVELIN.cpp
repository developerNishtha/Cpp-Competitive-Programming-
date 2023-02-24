#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n,m,x,count=0;
cin >>n>>m>>x;
  int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
            
        for(int i=0;i<n;i++){
            b[i]=a[i];
            if(b[i]>=m)
            count++;
        }
        sort(b,b+n);
       if(count<x){
           count=x;
       }
        cout<<count<<" ";
        for(int j=0;j<n;j++){
            for(int i=n-count; i<n;i++){
                if(a[j]==b[i])
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
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